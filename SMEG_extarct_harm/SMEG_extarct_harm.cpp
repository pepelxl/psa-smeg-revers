
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <boost/iostreams/filter/zlib.hpp>
#include <boost/iostreams/filtering_streambuf.hpp>
#include <boost/iostreams/device/file.hpp>
#include <boost/iostreams/copy.hpp>

using namespace std;

#define ui32 uint32_t
#define ui16 uint16_t
#define ui8 uint8_t

static ui32 reflect(ui32 data, ui8 nBits)
{
    ui32  reflection = 0x00000000;
    ui8  bit;

    for (bit = 0; bit < nBits; ++bit)
    {
        if (data & 0x01)
        {
            reflection |= (1 << ((nBits - 1) - bit));
        }

        data = (data >> 1);
    }

    return (reflection);

}


ui32 crcSlow(string data, ui32 poly, ui32 xorIn, bool refIn, bool refOut, ui32 xorOut)
{
    ui32 len = data.size();
    ui32 remainder = xorIn;


    for (ui32 byte = 0; byte < len; ++byte)
    {
        if (refIn) remainder ^= (reflect((unsigned char)data[byte], 8) << 24);
        else remainder ^= (unsigned char)data[byte] << 24;
        for (ui8 bit = 8; bit > 0; --bit)
        {
            if (remainder & 0x8000'0000)
            {
                remainder = (remainder << 1) ^ poly;
            }
            else
            {
                remainder = (remainder << 1);
            }
        }
    }
    if (refOut) remainder = reflect(remainder, 32);
    return (remainder ^ xorOut);
}

ui32 rs(ifstream& file, ui32 pos)
{
    file.seekg(pos, ios::beg);
    ui32 v;
    file.read((char*)&v, 4);
    return _byteswap_ulong(v);
}

struct head_block
{
    string harmony_name;
    string harmony_version;
    string generation_version;
    string harmony_file_name;
    ui32 universal_number;
    ui32 harmony_number;
    ui32 data_offset;
    ui32 harmony_size;
    ui32 harmony_CRC32;
    string data;
    ui32 unpack_size;
}head_b;




int main(int argc, char* argv[])
{
    if (argc <= 1)
    {
        std::cerr << "set argument = big_harmony.bin\n" << endl;
        system("pause");
        exit(1);
    }
    ifstream ifile;
    ifile.open(argv[1], ios_base::binary);
    if (!ifile)
    {
        std::cerr << "error open file\n";
        system("pause");
        exit(1);
    }
    string head_ident;
    head_ident.resize(10);
    ifile.read((char*)&head_ident[0], 10);
    if (head_ident == "BIGHARMONY")
    {
        cout << "TAG=" << head_ident << " (OK)" << endl;
    }
    else
    {
        std::cerr << "error head ident not \"BIGHARMONY\"\n";
        system("pause");
        exit(1);
    }
    string bigHarmony_maker;
    bigHarmony_maker.resize(32);
    ifile.seekg(0x800);
    ifile.read((char*)&bigHarmony_maker[0], 32);
    cout << "BigHarmony maker=" << bigHarmony_maker << endl;
    ui32 count_harm = rs(ifile, 0x820);
    cout << "Count=" << count_harm << endl;

    vector<head_block> stru;
    for (ui32 i = 0; i < count_harm; i++)
    {
        stru.push_back(head_b);
        stru[i].harmony_name.resize(100);
        ifile.read((char*)&stru[i].harmony_name[0], 100);
        stru[i].harmony_version.resize(32);
        ifile.read((char*)&stru[i].harmony_version[0], 32);
        stru[i].generation_version.resize(32);
        ifile.read((char*)&stru[i].generation_version[0], 32);
        stru[i].harmony_file_name.resize(32);
        ifile.read((char*)&stru[i].harmony_file_name[0], 32);
        ifile.read((char*)&stru[i].universal_number, 4);
        stru[i].universal_number = _byteswap_ulong(stru[i].universal_number);
        ifile.read((char*)&stru[i].harmony_number, 4);
        stru[i].harmony_number = _byteswap_ulong(stru[i].harmony_number);
        ifile.read((char*)&stru[i].data_offset, 4);
        stru[i].data_offset = _byteswap_ulong(stru[i].data_offset);
        ifile.read((char*)&stru[i].harmony_size, 4);
        stru[i].harmony_size = _byteswap_ulong(stru[i].harmony_size);
        ifile.read((char*)&stru[i].harmony_CRC32, 4);
        stru[i].harmony_CRC32 = _byteswap_ulong(stru[i].harmony_CRC32);

        ui32 cur = (ui32)ifile.tellg();
        stru[i].data.resize(stru[i].harmony_size);
        ifile.seekg(stru[i].data_offset * 2048);
        ifile.read((char*)&stru[i].unpack_size, 4);
        stru[i].unpack_size = _byteswap_ulong(stru[i].unpack_size);
        ifile.seekg(-4, ios::cur);
        ifile.read((char*)&stru[i].data[0], stru[i].harmony_size);
        ifile.seekg(cur);

        ui32 calc_crc32 = crcSlow(stru[i].data, 0x04C11DB7, 0xFFFFFFFF, true, true, 0xFFFFFFFF);
        
        cout << "-- Header position " << i+1 << endl;
        cout << "\tHarmony name=" << stru[i].harmony_name.c_str() << endl;
        cout << "\tHarmony version=" << stru[i].harmony_version.c_str() << endl;
        cout << "\tGeneration version=" << stru[i].generation_version.c_str() << endl;
        cout << "\tHarmony file name=" << stru[i].harmony_file_name.c_str() << endl;
        cout << "\tUniversal number=" << stru[i].universal_number << endl;
        cout << "\tHarmony number=" << stru[i].harmony_number << endl;
        cout << "\tData offset=" << stru[i].data_offset << endl;
        cout << "\tHarmony size=" << stru[i].harmony_size << endl;
        if (stru[i].harmony_CRC32 == calc_crc32)
        cout << "\tHarmony CRC32=" << stru[i].harmony_CRC32 << " (OK)" << endl;
        else
        {
            std::cerr << "error CRC32\n";
            system("pause");
            exit(1);
        }
        cout << "\tHarmony unpack size=" << stru[i].unpack_size << endl;

        boost::iostreams::filtering_streambuf<boost::iostreams::input> comp_stream;
        comp_stream.push(boost::iostreams::zlib_decompressor());
        std::stringstream sender;
        comp_stream.push(sender);
        sender << stru[i].data.substr(4);
        boost::iostreams::copy(comp_stream, boost::iostreams::file_sink((to_string(stru[i].harmony_number) + "_"s + stru[i].harmony_name.c_str() + ".bin"s), std::ios::binary));


       
    }


    system("pause");
    return 0;
}


