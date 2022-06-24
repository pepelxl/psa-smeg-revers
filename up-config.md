# AAS

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| AAS | AAS_Front_Present | BOOL ||
| AAS | AAS_Rear_Present | BOOL ||
| AAS | AVR_Brightness | INTEGER ||
| AAS | AVR_Brightness_ADV | INTEGER ||
| AAS | AVR_Chroma | INTEGER ||
| AAS | AVR_Chroma_ADV | INTEGER ||
| AAS | AVR_Contrast | INTEGER ||
| AAS | AVR_Contrast_ADV | INTEGER ||
| AAS | AVR_Hue_ADV | INTEGER ||
| AAS | AVR_Picture_Template | INTEGER |Выбор шаблона линий разметки камеры заднего вида|

# Управление климатом

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| Air_conditioning | AC_max_present | BOOL ||
| Air_conditioning | AQS_present | BOOL ||
| Air_conditioning | air_recycling_present | BOOL ||
| Air_conditioning | bizone_mix | BOOL ||
| Air_conditioning | mono_present | BOOL ||
| Air_conditioning | rear_clim_present | BOOL ||
| Air_conditioning | type_clim | INTEGER ||
| Air_conditioning | type_dist | BOOL ||
| Air_conditioning | typing_mode_present | BOOL ||

# Bluetooth

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| BT_data | BT_device_name | STRING |Имя bluetooth(есть второе, приоритет не понятен)|

# EC_NR_data

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| EC_NR_data | Arkamys_parameters | BLOB ||
| EC_NR_data | p_ec_block_delay | INTEGER ||
| EC_NR_data | p_far_out_amplify | INTEGER ||
| EC_NR_data | p_nr_attenuation | INTEGER ||

# TMC

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| TMC | TMC_Validity_Date | INTEGER ||
| TMC | TMC_Validity_Date | INTEGER ||
| TMC | TMC_Validity_Date | INTEGER ||

# TMC_Auto

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| TMC_Auto | Favourite_TMC_SID | INTEGER ||

# VAN

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| VAN | Display_orientation | BOOL | ориентация дисплея<br>0 - обычный<BR>1 - перевёрнутый|
| VAN | LVDS_Prehemphasis | BOOL |Скорое всего речь идёт о ошибке написания или французском произношении технологии под названием pre-emphasis. Если вкратце то это -усиление lvds сигнала на концах фронтов импульсов для более вертикальной кривой. Служит для устранения помех при передаче сигнала. На пятом smeg применяется конвертор от процессора на линию MAX9247, после него стоит коммутатор MAX9132. Более подробно про pre emphasis можете прочитать в datasheet на любую из этих микросхем.<br>По умолчанию 0<br>управляет первым или единственным выводом|
| VAN | LVDS_Prehemphasis_2 | BOOL |Скорое всего речь идёт о ошибке написания или французском произношении технологии под названием pre-emphasis. Если вкратце то это -усиление lvds сигнала на концах фронтов импульсов для более вертикальной кривой. Служит для устранения помех при передаче сигнала. На пятом smeg применяется конвертор от процессора на линию MAX9247, после него стоит коммутатор MAX9132. Более подробно про pre emphasis можете прочитать в datasheet на любую из этих микросхем.<br>По умолчанию 0<br>управляет вторым выводом (CIROCCO) там где он есть|
| VAN | VMF_VCCF | INTEGER |Тип подрулевых переключателей и кнопок на руле|

# Audio

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| audio | Arkamys_parameters | BLOB |набор данных меняется в зависимости от кузова<br>но, видимо, не зависит от комплектации. Представляет собой потоковый архив, который распаковывается в текстовый файл. Содержит параметры для системы Arkamys|
| audio | Audio_Config | INTEGER |закодирован тип звукового усилителя|
| audio | Audio_export_conf | BOOL ||
| audio | Fader | BOOL ||
| audio | Front_beep_vol_preset_std | INTEGER ||
| audio | Rear_beep_vol_preset_std | INTEGER ||
| audio | STT_attenuation | INTEGER ||
| audio | Volume_Curves | INTEGER ||

# Часы

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| clock | Clock_Display | BOOL |отображение часов. должно быть отключено вывод на внешнии дисплеи(вчастности в config_options пункт SW_OPTION_LVDS_EXPORT|

# Diag

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| diag | GPS_Activity_Threshold | INTEGER |порог определения активного состояния системы gps<br>по умолчанию 3 спутника|
| diag | Radio_Activity_Threshold | INTEGER |порог определения активного состояния аналогово радио dB/µV<br>по умолчанию 0|
| diag | DAB_Activity_Threshold | INTEGER |порог определения активного состояния цифрового радио dB/µV<br>по умолчанию 15|
| diag | Diag_tool_signature | INTEGER |1/3 байт хранит идентификатор устройства/пользователя который последний раз кодировал [подробнее](https://github.com/ludwig-v/arduino-psa-diag#kwp)|
| diag | Diag_tool_signature | INTEGER |2/3 байт хранит идентификатор устройства/пользователя который последний раз кодировал [подробнее](https://github.com/ludwig-v/arduino-psa-diag#kwp)|
| diag | Diag_tool_signature | INTEGER |3/3 байт хранит идентификатор устройства/пользователя который последний раз кодировал [подробнее](https://github.com/ludwig-v/arduino-psa-diag#kwp)|
| diag | Free_byte | INTEGER ||
| diag | Telecoding_date | INTEGER |1/3 байт хранит дату последней кодировки(число) [подробнее](https://github.com/ludwig-v/arduino-psa-diag#kwp)|
| diag | Telecoding_date | INTEGER |2/3 байт хранит дату последней кодировки(месяц) [подробнее](https://github.com/ludwig-v/arduino-psa-diag#kwp)|
| diag | Telecoding_date | INTEGER |3/3 байт хранит дату последней кодировки(год) [подробнее](https://github.com/ludwig-v/arduino-psa-diag#kwp)|
| diag | Telecoding_site | INTEGER |служба, которая кодировала(обычно 0xFD(послепродажное кодирование)) [подробнее](https://github.com/ludwig-v/arduino-psa-diag#kwp)|
| diag | Vehicle_Brand | INTEGER |Бренд автомобиля<br>1 peugeot<br>2 citroen<br>3 ds|
| diag | Vin_crypted | BLOB ||

# Display

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| display | Alerts_Present | BOOL |Всплывающие сообщения<br>Например: открыта дверь и т.д|
| display | External_Temperature | BOOL |отображение внешней температуры. должно быть отключено вывод на внешнии дисплеи(вчастности в config_options пункт SW_OPTION_LVDS_EXPORT|
| display | Harm_1 | BOOL |наличие темы|
| display | Harm_2| BOOL |наличие темы|
| display | Harm_3 | BOOL |наличие темы|
| display | Harm_4 | BOOL |наличие темы|
| display | Harm_5 | BOOL |наличие темы|
| display | Harm_6 | BOOL |наличие темы|
| display | Harm_7 | BOOL |наличие темы|
| display | Harm_8 | BOOL |наличие темы|
| display | Harm_9 | BOOL |наличие темы|
| display | Harm_10| BOOL |наличие темы|
| display | Harm_11| BOOL |наличие темы|
| display | Harm_12| BOOL |наличие темы|
| display | JDA_Present | BOOL ||
| display | LCD_Display | BOOL |аргумент активируется, если установлен внешний LCD дисплей<br>Например: приборная панель С4 picasso без cirocco|
| display | Language_Unit | BOOL |меню выбора языков|
| display | Matrix_Display | BOOL |аргумент активируется, если установлен внешний матричный дисплей<br>Например: дисплей информационных сообщении в приборной панели peugeot 308|

# Display_configuration

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| display_configuration | Backlight_Command_Type | BOOL | включение ползунка управления яркостью подсветки (16 градаций)<br>параметр активен при cirocco|
| display_configuration | Dark_Type | BOOL |выход из ночного режима<br>0-сенсоная панель пробуждает диспплей<br>1-дисплей не пробуждается|
| display_configuration | Default_Display_Color | INTEGER ||
| display_configuration | Display1_Config | BLOB |набор данных всех дисплеев одинаков для всех комплектаций|
| display_configuration | Display2_Config | BLOB |набор данных всех дисплеев одинаков для всех комплектаций|
| display_configuration | Display3_Config | BLOB |набор данных всех дисплеев одинаков для всех комплектаций|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |0/22 яркость сенсорного дисплея 1/16 |
| display_configuration | Lightness_Table_VAN_HR | INTEGER |1/22 яркость сенсорного дисплея 2/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |2/22 яркость сенсорного дисплея 3/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |3/22 яркость сенсорного дисплея 4/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |4/22 яркость сенсорного дисплея 5/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |5/22 яркость сенсорного дисплея 6/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |6/22 яркость сенсорного дисплея 7/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |7/22 яркость сенсорного дисплея 8/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |8/22 яркость сенсорного дисплея 9/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |9/22 яркость сенсорного дисплея 10/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |10/22 яркость сенсорного дисплея 11/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |11/22 яркость сенсорного дисплея 12/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |12/22 яркость сенсорного дисплея 13/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |13/22 яркость сенсорного дисплея 14/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |14/22 яркость сенсорного дисплея 15/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |15/22 яркость сенсорного дисплея 16/16|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |16/22 яркость|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |17/22 яркость|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |18/22 яркость|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |19/22 яркость|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |20/22 яркость|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |21/22 яркость|
| display_configuration | Lightness_Table_VAN_HR | INTEGER |22/22 яркость|
| display_configuration | Selected_Display | INTEGER ||

  # Секция отвечает за отображение и настройку вида меню DRIVE
_present: 0 - кнопка/функция скрыта, однако функционал может осуществлятся на внешних устройствах (например панель приборов TFT(cirocco)) ; 1 - отображает кнопку на сенсорном дисплее<br>
_family - порядковый номер строки, в которой располагается кнопка (1-4)<br>
_priority - порядковый номер кнопки в строке (1-3). OS сама следит за центрированием кнопок на дисплее в зависимости от их активноси<br>
_display - 0 - информация от функции отображается на приборной панели; 1 - Информация отоброжается на дисплеи
  
  
|Секция|Имя|Тип|Значения|Фото|
|:---|:---|:---|---|---|
| drive | aas_push_present | BOOL |помощь при парковке(отключение парктроников)  (кнопка)|![alt text](/image/aas_p.bmp)|
| drive | aas_push_family | INTEGER |номер строки|
| drive | aas_push_priority | INTEGER |порядковый номер в строке|
| drive | aas_display_present | BOOL |0-приборная панель<br>1-монитор|
||||
| drive | avr_display_present | BOOL |камера заднего вида<br>0-приборная панель<br>1-монитор|
||||
| drive | afil_push_present | BOOL |слежение за дорожной разметкой (кнопка)|![alt text](/image/afil_p.bmp)|
| drive | afil_push_family | INTEGER |номер строки|
| drive | afil_push_priority | INTEGER |порядковый номер в строке|
||||
| drive | artiv_push_present | BOOL |слежение за интервалом движения (кнопка)|![alt text](/image/artiv_p.bmp)|
| drive | artiv_push_family | INTEGER |номер строки|
| drive | artiv_push_priority | INTEGER |порядковый номер в строке|
||||
| drive | avp_push_present | BOOL |обзор 360 (кнопка)|![alt text](/image/avp_p.bmp)|
| drive | avp_push_family | INTEGER |номер строки|
| drive | avp_push_priority | INTEGER |порядковый номер в строке|
| drive | avp_fct_present | BOOL |0 - функция отсутствует<br> 1 - Функция имеется|
||||
| drive | cafr_push_present | BOOL |автомататический дальний свет (кнопка)|![alt text](/image/cafr_p.bmp)|
| drive | cafr_push_family | INTEGER |номер строки|
| drive | cafr_push_priority | INTEGER |порядковый номер в строке|
||||
| drive | check_push_present | BOOL |check (кнопка)|![alt text](/image/check_p.bmp)|
| drive | check_push_family | INTEGER |номер строки|
| drive | check_push_priority | INTEGER |порядковый номер в строке|
| drive | check_display_present | BOOL |0-приборная панель<br>1-монитор|
| drive | maint_display_present | BOOL |Отображение сервисного интервала<br>0-приборная панель<br>1-монитор(в меню check)|
||||
| drive | cpk_push_present | BOOL |парковочный асистент (кнопка)|![alt text](/image/cpk_p.bmp)|
| drive | cpk_push_family | INTEGER |номер строки|
| drive | cpk_push_priority | INTEGER |порядковый номер в строке|
| drive | cpk_fct_present | INTEGER |Тип системы помощи при парковке:<br>0 - Функция отсутствует<br>1 - Полуавтоматическая система помощи при парковке параллельно тротуару имеется<br>2 - Полуавтоматическая система помощи при парковке параллельно и перпендикулярно тротуару имеется|
| drive | cpk_display_present | BOOL |0-приборная панель<br>1-монитор|
| drive | amsp_speed_threshold | INTEGER |Перпендикулярная парковка (кнопка)<br>скорость при которой кнопка становится серой|
| drive | scp6_speed_threshold | INTEGER |Начало параллельной парковки (кнопка)<br>скорость при которой кнопка становится серой|
| drive | scp9_speed_threshold | INTEGER |Выезд с параллельной парковки (кнопка)<br>скорость при которой кнопка становится серой|
||||
| drive | dsg_push_present | BOOL |система контроля давления в шинах (кнопка)|![alt text](/image/dsg_p.bmp)|
| drive | dsg_push_family | INTEGER |номер строки|
| drive | dsg_push_priority | INTEGER |порядковый номер в строке|
| drive | dsg_fct_present | INTEGER |<br>0 - Функция отсутствует<br>1 - косвенно(ABS/ESP)<br>2 - непосредственно (датчиками в колёсах)|
||||
| drive | perso_push_present | BOOL |меню параметры (кнопка)|![alt text](/image/perso_p.bmp)|
| drive | perso_push_family | INTEGER |номер строки|
| drive | perso_push_priority | INTEGER |порядковый номер в строке|
||||
| drive | rlvv_push_present | BOOL |настройка скоростных режимов (кнопка)<br>не влияет на вызов меню с руля|![alt text](/image/rlvv_p.bmp)|
| drive | xvv_push_family | INTEGER |номер строки|
| drive | xvv_push_priority | INTEGER |порядковый номер в строке|
||||
| drive | rvv_rvvi_present | BOOL |интеллектуальный регулятор скорости (кнопка)|![alt text](/image/rvv_p.bmp)|
| drive | rvv_rvvi_push_family | INTEGER |номер строки|
| drive | rvv_rvvi_push_priority | INTEGER |порядковый номер в строке|
| drive | vhl_rvvi_type | INTEGER |Вставка управления дистанцией активоного круиз-контроля во вкладке задания скоростей(при нажатии кнопки MEM)<br> - Régulation de vitesse véhicule(обычный круиз - без вставки)<br> - Régulation de vitesse véhicule adaptée(вставка управления в секундах от 1 до 3)<br> - Régulation de vitesse véhicule adaptée sélectionnée(???)<br>
||||
| drive | sam_push_present | BOOL |контроль мёртых зон (кнопка)|![alt text](/image/sam_p.bmp)|
| drive | sam_push_family | INTEGER |номер строки|
| drive | sam_push_priority | INTEGER |порядковый номер в строке|
||||
| drive | stt_push_present | BOOL |старт-стоп (кнопка)|![alt text](/image/stt_p.bmp)|
| drive | stt_push_family | INTEGER |номер строки|
| drive | stt_push_priority | INTEGER |порядковый номер в строке|
| drive | stt_fct_present | BOOL |0 - функция отсутствует<br> 1 - Функция имеется|
||||
| drive | asr_push_present | BOOL |Речь, скорее всего, идёт о кнопке отключения бробуксовки колёс. Иконка кнопки отсутствует во всех темах пятой оси, и присутствует в темах шестой оси. Все заявленные кузова в пятёрке имеют физическую кнопку|
| drive | asr_push_family | INTEGER |номер строки|
| drive | asr_push_priority | INTEGER |порядковый номер в строке|
||||
| drive | hy_push_present | BOOL |Речь, скорее всего, идёт о кнопке гибридного привода. Иконка отсутствует во всех темах. Скорее всего оставлена закладка разработчиками, но не реализована.|
| drive | hy_push_family | INTEGER |номер строки|
| drive | hy_push_priority | INTEGER |порядковый номер в строке|
| drive | hy_fct_present | BOOL |Особый функционал!!! Этот пункт активирует страницу гибридного привода. Должен быть активирован пункт Trip_page_activation и выключены все остальные активные кнопки. Весь остальной функционал в 508 заложен физическими кнопками и пунктами в меню приборки.|
||||
| drive | mpd_push_present | BOOL |Предположение, так как отображения добится не смог. Речь скорее всего идёт о Mesure de place disponible(Система измерения парковочного места)(кнопка)|![alt text](/image/mpd_p.bmp)|
| drive | mpd_push_family | INTEGER |номер строки|
| drive | mpd_push_priority | INTEGER |порядковый номер в строке|

# General

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| general | Speed_Video | INTEGER ||

# Internet

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| internet | 3G_EEM_only | BOOL ||
| internet | Energy_type | INTEGER ||
| internet | Handbrake_consideration | BOOL ||
| internet | PSA_portal_active | BOOL ||
| internet | Smartapps | BOOL ||
| internet | Speed_Internet_Lock | INTEGER |скорость при которой блокируется браузер|
| internet | URL_PSA_portal | STRING |путь к странице заглушке для вкладки приложений PSA при остутствии модема|
| internet | URL_Proxy | STRING |прокси адрес<br>испозуется заводским модемом<br>Citroën Multicity Connect<br>Peugeot Connect Apps|
| internet | URL_Welcome_Page | STRING |домашняя страница браузера|
| internet | Web_active | BOOL | активирует встроенный браузер|
| internet | Wifi_active | BOOL ||

# Keyboard

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| keyboard | FANParameters | INTEGER ||
| keyboard | FANParameters | INTEGER ||
| keyboard | FANParameters | INTEGER ||
| keyboard | FANParameters | INTEGER ||
| keyboard | FANParameters | INTEGER ||
| keyboard | FMUX_Config | BLOB |Набор данных отвечающих за конфигурацию физических кнопок управления магнитолой|
| keyboard | FanCurrentLimits | INTEGER ||
| keyboard | FanCurrentLimits | INTEGER ||
| keyboard | FanCurrentLimits | INTEGER ||
| keyboard | FanCurrentLimits | INTEGER ||
| keyboard | Volume_Threshold_FAN | INTEGER ||

# Map

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| map | DRM | BOOL |Отключает проверку ключа при установке новых версий карт|

# Навигация

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| navigation | Diag_SpeedLimit_Activation | BOOL ||
| navigation | Diag_SpeedTrap_Activation | BOOL ||
| navigation | Exp_Nav_With_Street_Name | BOOL ||
| navigation | Exp_Nav_With_Street_Name_Junction_View | BOOL |передача навигационных данных в can<br>информация о перекрёстках|
| navigation | Exp_Nav_Without_Street_Name | BOOL ||
| navigation | HW_GPS_Reset | BOOL ||
| navigation | LocInitDiag | BLOB ||

# Supervisor

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| supervisor | VIN | INTEGER | 1 знак VIN|
| supervisor | VIN | INTEGER | 2 знак VIN|
| supervisor | VIN | INTEGER | 3 знак VIN|
| supervisor | VIN | INTEGER | 4 знак VIN|
| supervisor | VIN | INTEGER | 5 знак VIN|
| supervisor | VIN | INTEGER | 6 знак VIN|
| supervisor | VIN | INTEGER | 7 знак VIN|
| supervisor | VIN | INTEGER | 8 знак VIN|
| supervisor | VIN | INTEGER | 9 знак VIN|
| supervisor | VIN | INTEGER | 10 знак VIN|
| supervisor | VIN | INTEGER | 11 знак VIN|
| supervisor | VIN | INTEGER | 12 знак VIN|
| supervisor | VIN | INTEGER | 13 знак VIN|
| supervisor | VIN | INTEGER | 14 знак VIN|
| supervisor | VIN | INTEGER | 15 знак VIN|
| supervisor | VIN | INTEGER | 16 знак VIN|
| supervisor | VIN | INTEGER | 17 знак VIN|

# Trip_computer

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| trip_computer | Trip_cycling | BOOL | переход в меню и переключение вкладок бортового компъютера подрулевой кнопкой. Работает при активированной Trip_page_activation. Если включены все три пункта, то подрулевая кнопка переключает вкладки в секции drive, а на других страницах появляются всплывающие окна. |
| trip_computer | Trip_page_activation | BOOL |активирует меню бортового компъютера в секции drive. занимает один из столбиков первой страницы|
| trip_computer | Trip_popup_activation | BOOL |Вместо Trip_page_activation подрулевая кнопка циклично вызывает всплывающие окна с вкладками бортового компъютера|

# Аналоговое радио

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| tuner | AM | BOOL |Регион AM|
| tuner | Antenna1_config | INTEGER |Активная\Пасивная антена|
| tuner | Antenna2_config | INTEGER |Активная\Пасивная антена|
| tuner | Antennas_number | INTEGER |количество антен<br>0 - одна<br>1 - две|
| tuner | Country | INTEGER |регион, определяет шаг и частотную сетку<br>Europe<br>Japon<br>Amérique latine<br>Asie et Chine<br>Arabie<br>USA<br>Corée<br>Canada|
| tuner | Radio_Logo | BOOL |Отображение логотипов радио станций|
| tuner | Sensitivity_curve | INTEGER ||

# Цифровое радио

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| tuner_DAB | Antenna_config | INTEGER ||
| tuner_DAB | DAB | INTEGER ||
| tuner_DAB | DAB_announcements | INTEGER ||
| tuner_DAB | Slideshow_speed_limit | INTEGER ||

# Upgrade

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| upgrade | HarmoniesChecked | INTEGER |Назначение не известно. Предположительно это версия кодировочной страницы(привязана жостко к версии прошивки(1-10))|

# Конфигурация автомобиля

|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| vehicle_configuration | Vehicle_Type | INTEGER |Модель автомобиля [подробнее](/vehicle.md)|
| vehicle_configuration | Bodywork_Type | INTEGER |Тип кузова автомобиля [подробнее](/vehicle.md)|
||||
| vehicle_configuration | Auto_Rear_View | BOOL |**Пункт в меню** [param0](/db_alerts.md#vhl_param_order)<br>Автоматический наклон зеркала при движением задним ходом|
| vehicle_configuration | Auto_Rear_Wiper | BOOL |**Пункт в меню** [param7](/db_alerts.md#vhl_param_order)<br>Включение очистителя заднего стекла при движении задним ходом|
| vehicle_configuration | Auto_Sec_Brake | BOOL |**Пункт в меню** [param3](/db_alerts.md#vhl_param_order)<br>Автоматический стояночный тормозДля отображения опции, BSI должен быть закодирован на наличие(zone 23B3)|
| vehicle_configuration | Collision_Risk_Menu | BOOL |**Пункт в меню** [param5](/db_alerts.md#vhl_param_order)<br>Сигнал о риске столкновения<br>Требуется радар в бампере ARTIV|
| vehicle_configuration | Auto_Brake_Collision_Menu | BOOL |[param6](/db_alerts.md#vhl_param_order) Чекбокс "Автоматическое экстренное торможение" в меню Collision_Risk_Menu|
| vehicle_configuration | Urban_FARC | BOOL |**Пункт в меню** [param20](/db_alerts.md#vhl_param_order)<br>Автоматическое экстренное торможение<br>Требуется радар в бампере ARTIV|
||||
| vehicle_configuration | Adaptable_Lightning | BOOL |**Пункт в меню** [param12](/db_alerts.md#vhl_param_order)<br>Адаптивное освещение|
| vehicle_configuration | Ambience_Lightning | BOOL |**Пункт в меню** [param14](/db_alerts.md#vhl_param_order)<br>Мягкая подсветка салона<br>Используется, при наличии вежливой подсветки|
| vehicle_configuration | Ambience_Lightning_Level | BOOL |[param22](/db_alerts.md#vhl_param_order) Ползунок яркости в пункте Ambience_Lightning<br>Используется, при диодной вежливой подсветке|
| vehicle_configuration | Welcome_Lighting | BOOL |**Пункт в меню** [param11](/db_alerts.md#vhl_param_order)<br>Дистанционное включение световых приборов|
| vehicle_configuration | Courtesy_Lightning | BOOL |**Пункт в меню** [param10](/db_alerts.md#vhl_param_order)<br>Сопровождающее освещение|
| vehicle_configuration | Diurnal_Headlights | BOOL |**Пункт в меню** [param13](/db_alerts.md#vhl_param_order)<br>Дневные ходовые огни|
||||
| vehicle_configuration | Back_Flap | BOOL |**Пункт в меню** [param15](/db_alerts.md#vhl_param_order)<br>Электропривод крышки багажника|
| vehicle_configuration | Driver_Doors_Selectivity | BOOL |**Пункт в меню** [param17](/db_alerts.md#vhl_param_order)<br>ПДУ для двери водителя|
| vehicle_configuration | Driver_Welcome | BOOL |**Пункт в меню** [param16](/db_alerts.md#vhl_param_order)<br>"Встреча" водителя. Исполнительным устройством является блок памяти сиденья водителя. Для отображения опции, BSI должен быть закодирован на наличие(zone 234С)|
||||
| vehicle_configuration | AsrPlus | BOOL ||
| vehicle_configuration | Audio_Harm | BOOL ||
| vehicle_configuration | Auto_Headlights | BOOL ||
| vehicle_configuration | Boot_Perm_Locking | BOOL ||
| vehicle_configuration | COE_Locking_Mode | BOOL ||
| vehicle_configuration | Interactive_Form | BOOL ||
| vehicle_configuration | Motorway_Lighting | BOOL |Технология расширения освещения на левую полосу на шоссе. В теории требует поворотных фар и камеры, плюс возможность определения шоссе с картографических данных. Что она делает в голове при условии наличия отдельного пунктов меню(судя по таблицам)???|
| vehicle_configuration | Near_Obstacles_Detection | INTEGER ||
| vehicle_configuration | Other_Doors_Selectivity | BOOL ||
| vehicle_configuration | Overtake_Help | INTEGER ||
| vehicle_configuration | Overtake_Help_Menu | BOOL ||
| vehicle_configuration | Radiator_Grille_Lighting | BOOL ||
| vehicle_configuration | Rear_Park_Menu | BOOL ||
| vehicle_configuration | Remote_Doors_Locking | BOOL ||
| vehicle_configuration | Securoscope | BOOL ||
| vehicle_configuration | Speed_Limiter_Stop | BOOL ||
| vehicle_configuration | Speed_limiter_conf | BOOL |Работа с меню установки памяти скоросных режимов для круизконтроля и ограничителя. Если отключено, то сенсорная клавиша rlvv_push_present серая.|
| vehicle_configuration | Windows_Partial_Opening | BOOL ||
| vehicle_configuration | VMFAlerts | BOOL ||
| vehicle_configuration | VMFAlertsCheck | BOOL ||
| vehicle_configuration | VMFBlackPanel | BOOL ||
| vehicle_configuration | VMFCMBColor | BOOL ||
| vehicle_configuration | VMFCMBConf | BOOL ||
| vehicle_configuration | VMFCourtLight | BOOL ||
| vehicle_configuration | VMFFirstPage | BOOL ||
| vehicle_configuration | VMFFuncState | BOOL ||
| vehicle_configuration | VMFProfile | BOOL ||
