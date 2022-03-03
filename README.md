# psa-smeg-revers
Рассматриваем  конструкцию магнитолы SMEG пятой линейки.
<br>За основу взята прошивка 5.43.A.R2

Папка SMEG_extract_harm содержит исходник и скомпилированную утилиту для извлечения тем из контейнера BIG_HARMONY.bin файлов обновления магнитолы.

Ссылка на варианты кодировок для 6 оси https://drive.google.com/file/d/1EIV0orKCzKsZSx1PM2rB4obmCjci3UbF/view


Устроийтво содержит файловые разделы dosfs:<br>
  /SYSTEM_DATA<br>
  /SYSTEM_TMP_DATA<br>
  /USER_DATA<br>
  /USER_DATA_BACKUP<br>
  
  Backup содержит резервные копии файлов для востановления системы в случаии неисправности основных файлов в USER_DATA.<br>
  /USER_DATA/user_data/Audio пользовательские данные настроек радио<br>
  /USER_DATA/user_data/Nav пользовательские данные настроек навигации<br>
  /USER_DATA/user_data/T2BT пользовательские данные настроек телефона<br>
  
