#AAS

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
| AAS | AVR_Picture_Template | INTEGER ||

#Климат

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


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| BT_data | BT_device_name | STRING ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| EC_NR_data | Arkamys_parameters | BLOB ||
| EC_NR_data | p_ec_block_delay | INTEGER ||
| EC_NR_data | p_far_out_amplify | INTEGER ||
| EC_NR_data | p_nr_attenuation | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| TMC | TMC_Validity_Date | INTEGER ||
| TMC | TMC_Validity_Date | INTEGER ||
| TMC | TMC_Validity_Date | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| TMC_Auto | Favourite_TMC_SID | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| VAN | Display_orientation | BOOL | ориентация дисплея<br>0 - обычный<BR>1 - перевёрнутый|
| VAN | LVDS_Prehemphasis | BOOL |Скорое всего речь идёт о ошибке написания или французском произношении технологии под названием pre-emphasis. Если вкратце то это -усиление lvds сигнала на концах фронтов импульсов для более вертикальной кривой. Служит для устранения помех при передаче сигнала. На пятом smeg применяется конвертор от процессора на линию MAX9247, после него стоит коммутатор MAX9132. Более подробно про pre emphasis можете прочитать в datasheet на любую из этих микросхем.<br>По умолчанию 0<br>управляет первым или единственным выводом|
| VAN | LVDS_Prehemphasis_2 | BOOL |Скорое всего речь идёт о ошибке написания или французском произношении технологии под названием pre-emphasis. Если вкратце то это -усиление lvds сигнала на концах фронтов импульсов для более вертикальной кривой. Служит для устранения помех при передаче сигнала. На пятом smeg применяется конвертор от процессора на линию MAX9247, после него стоит коммутатор MAX9132. Более подробно про pre emphasis можете прочитать в datasheet на любую из этих микросхем.<br>По умолчанию 0<br>управляет вторым выводом (CIROCCO) там где он есть|
| VAN | VMF_VCCF | INTEGER |Тип подрулевых переключателей и кнопок на руле|


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| audio | Arkamys_parameters | BLOB ||
| audio | Audio_Config | INTEGER ||
| audio | Audio_export_conf | BOOL ||
| audio | Fader | BOOL ||
| audio | Front_beep_vol_preset_std | INTEGER ||
| audio | Rear_beep_vol_preset_std | INTEGER ||
| audio | STT_attenuation | INTEGER ||
| audio | Volume_Curves | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| clock | Clock_Display | BOOL ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| diag | DAB_Activity_Threshold | INTEGER ||
| diag | Diag_tool_signature | INTEGER |1/3 байт хранит идентификатор устройства/пользователя который последний раз кодировал|
| diag | Diag_tool_signature | INTEGER |2/3 байт хранит идентификатор устройства/пользователя который последний раз кодировал|
| diag | Diag_tool_signature | INTEGER |3/3 байт хранит идентификатор устройства/пользователя который последний раз кодировал|
| diag | Free_byte | INTEGER ||
| diag | GPS_Activity_Threshold | INTEGER ||
| diag | Radio_Activity_Threshold | INTEGER ||
| diag | Telecoding_date | INTEGER |1/3 байт хранит дату последней кодировки|
| diag | Telecoding_date | INTEGER |2/3 байт хранит дату последней кодировки|
| diag | Telecoding_date | INTEGER |3/3 байт хранит дату последней кодировки|
| diag | Telecoding_site | INTEGER |возможно означает количество отправленных байт кодировки|
| diag | Vehicle_Brand | INTEGER ||
| diag | Vin_crypted | BLOB ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| display | Alerts_Present | BOOL ||
| display | External_Temperature | BOOL ||
| display | Harm_1 | BOOL ||
| display | Harm_2| BOOL ||
| display | Harm_3 | BOOL ||
| display | Harm_4 | BOOL ||
| display | Harm_5 | BOOL ||
| display | Harm_6 | BOOL ||
| display | Harm_7 | BOOL ||
| display | Harm_8 | BOOL ||
| display | Harm_9 | BOOL ||
| display | Harm_10| BOOL ||
| display | Harm_11| BOOL ||
| display | Harm_12| BOOL ||
| display | JDA_Present | BOOL ||
| display | LCD_Display | BOOL ||
| display | Language_Unit | BOOL ||
| display | Matrix_Display | BOOL ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| display_configuration | Backlight_Command_Type | BOOL ||
| display_configuration | Dark_Type | BOOL ||
| display_configuration | Default_Display_Color | INTEGER ||
| display_configuration | Display1_Config | BLOB ||
| display_configuration | Display2_Config | BLOB ||
| display_configuration | Display3_Config | BLOB ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Lightness_Table_VAN_HR | INTEGER ||
| display_configuration | Selected_Display | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| drive | aas_display_present | BOOL ||
| drive | aas_push_family | INTEGER ||
| drive | aas_push_present | BOOL ||
| drive | aas_push_priority | INTEGER ||
| drive | afil_push_family | INTEGER ||
| drive | afil_push_present | BOOL ||
| drive | afil_push_priority | INTEGER ||
| drive | amsp_speed_threshold | INTEGER ||
| drive | artiv_push_family | INTEGER ||
| drive | artiv_push_present | BOOL ||
| drive | artiv_push_priority | INTEGER ||
| drive | asr_push_family | INTEGER ||
| drive | asr_push_present | BOOL ||
| drive | asr_push_priority | INTEGER ||
| drive | avp_fct_present | BOOL ||
| drive | avp_push_family | INTEGER ||
| drive | avp_push_present | BOOL ||
| drive | avp_push_priority | INTEGER ||
| drive | avr_display_present | BOOL ||
| drive | cafr_push_family | INTEGER ||
| drive | cafr_push_present | BOOL ||
| drive | cafr_push_priority | INTEGER ||
| drive | check_display_present | BOOL ||
| drive | check_push_family | INTEGER ||
| drive | check_push_present | BOOL ||
| drive | check_push_priority | INTEGER ||
| drive | cpk_display_present | BOOL ||
| drive | cpk_fct_present | INTEGER ||
| drive | cpk_push_family | INTEGER ||
| drive | cpk_push_present | BOOL ||
| drive | cpk_push_priority | INTEGER ||
| drive | dsg_fct_present | INTEGER ||
| drive | dsg_push_family | INTEGER ||
| drive | dsg_push_present | BOOL ||
| drive | dsg_push_priority | INTEGER ||
| drive | hy_fct_present | BOOL ||
| drive | hy_push_family | INTEGER ||
| drive | hy_push_present | BOOL ||
| drive | hy_push_priority | INTEGER ||
| drive | maint_display_present | BOOL ||
| drive | mpd_push_family | INTEGER ||
| drive | mpd_push_present | BOOL ||
| drive | mpd_push_priority | INTEGER ||
| drive | perso_push_family | INTEGER ||
| drive | perso_push_present | BOOL ||
| drive | perso_push_priority | INTEGER ||
| drive | rlvv_push_present | BOOL ||
| drive | rvv_rvvi_present | BOOL ||
| drive | rvv_rvvi_push_family | INTEGER ||
| drive | rvv_rvvi_push_priority | INTEGER ||
| drive | sam_push_family | INTEGER ||
| drive | sam_push_present | BOOL ||
| drive | sam_push_priority | INTEGER ||
| drive | scp6_speed_threshold | INTEGER ||
| drive | scp9_speed_threshold | INTEGER ||
| drive | stt_fct_present | BOOL ||
| drive | stt_push_family | INTEGER ||
| drive | stt_push_present | BOOL ||
| drive | stt_push_priority | INTEGER ||
| drive | vhl_rvvi_type | INTEGER ||
| drive | xvv_push_family | INTEGER ||
| drive | xvv_push_priority | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| general | Speed_Video | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| internet | 3G_EEM_only | BOOL ||
| internet | Energy_type | INTEGER ||
| internet | Handbrake_consideration | BOOL ||
| internet | PSA_portal_active | BOOL ||
| internet | Smartapps | BOOL ||
| internet | Speed_Internet_Lock | INTEGER ||
| internet | URL_PSA_portal | STRING ||
| internet | URL_Proxy | STRING ||
| internet | URL_Welcome_Page | STRING ||
| internet | Web_active | BOOL ||
| internet | Wifi_active | BOOL ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| keyboard | FANParameters | INTEGER ||
| keyboard | FANParameters | INTEGER ||
| keyboard | FANParameters | INTEGER ||
| keyboard | FANParameters | INTEGER ||
| keyboard | FANParameters | INTEGER ||
| keyboard | FMUX_Config | BLOB ||
| keyboard | FanCurrentLimits | INTEGER ||
| keyboard | FanCurrentLimits | INTEGER ||
| keyboard | FanCurrentLimits | INTEGER ||
| keyboard | FanCurrentLimits | INTEGER ||
| keyboard | Volume_Threshold_FAN | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| map | DRM | BOOL ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| navigation | Diag_SpeedLimit_Activation | BOOL ||
| navigation | Diag_SpeedTrap_Activation | BOOL ||
| navigation | Exp_Nav_With_Street_Name | BOOL ||
| navigation | Exp_Nav_With_Street_Name_Junction_View | BOOL ||
| navigation | Exp_Nav_Without_Street_Name | BOOL ||
| navigation | HW_GPS_Reset | BOOL ||
| navigation | LocInitDiag | BLOB ||


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


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| trip_computer | Trip_cycling | BOOL ||
| trip_computer | Trip_page_activation | BOOL ||
| trip_computer | Trip_popup_activation | BOOL ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| tuner | AM | BOOL ||
| tuner | Antenna1_config | INTEGER ||
| tuner | Antenna2_config | INTEGER ||
| tuner | Antennas_number | INTEGER ||
| tuner | Country | INTEGER ||
| tuner | Radio_Logo | BOOL ||
| tuner | Sensitivity_curve | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| tuner_DAB | Antenna_config | INTEGER ||
| tuner_DAB | DAB | INTEGER ||
| tuner_DAB | DAB_announcements | INTEGER ||
| tuner_DAB | Slideshow_speed_limit | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| upgrade | HarmoniesChecked | INTEGER ||


|Секция|Имя|Тип|Значения|
|:---|:---|:---|---|
| vehicle_configuration | Adaptable_Lightning | BOOL ||
| vehicle_configuration | Ambience_Lightning | BOOL ||
| vehicle_configuration | Ambience_Lightning_Level | BOOL ||
| vehicle_configuration | AsrPlus | BOOL ||
| vehicle_configuration | Audio_Harm | BOOL ||
| vehicle_configuration | Auto_Brake_Collision_Menu | BOOL ||
| vehicle_configuration | Auto_Headlights | BOOL ||
| vehicle_configuration | Auto_Rear_View | BOOL ||
| vehicle_configuration | Auto_Rear_Wiper | BOOL ||
| vehicle_configuration | Auto_Sec_Brake | BOOL ||
| vehicle_configuration | Back_Flap | BOOL ||
| vehicle_configuration | Bodywork_Type | INTEGER ||
| vehicle_configuration | Boot_Perm_Locking | BOOL ||
| vehicle_configuration | COE_Locking_Mode | BOOL ||
| vehicle_configuration | Collision_Risk_Menu | BOOL ||
| vehicle_configuration | Courtesy_Lightning | BOOL ||
| vehicle_configuration | Diurnal_Headlights | BOOL ||
| vehicle_configuration | Driver_Doors_Selectivity | BOOL ||
| vehicle_configuration | Driver_Welcome | BOOL ||
| vehicle_configuration | Interactive_Form | BOOL ||
| vehicle_configuration | Motorway_Lighting | BOOL ||
| vehicle_configuration | Near_Obstacles_Detection | INTEGER ||
| vehicle_configuration | Other_Doors_Selectivity | BOOL ||
| vehicle_configuration | Overtake_Help | INTEGER ||
| vehicle_configuration | Overtake_Help_Menu | BOOL ||
| vehicle_configuration | Radiator_Grille_Lighting | BOOL ||
| vehicle_configuration | Rear_Park_Menu | BOOL ||
| vehicle_configuration | Remote_Doors_Locking | BOOL ||
| vehicle_configuration | Securoscope | BOOL ||
| vehicle_configuration | Speed_Limiter_Stop | BOOL ||
| vehicle_configuration | Speed_limiter_conf | BOOL ||
| vehicle_configuration | Urban_FARC | BOOL ||
| vehicle_configuration | VMFAlerts | BOOL ||
| vehicle_configuration | VMFAlertsCheck | BOOL ||
| vehicle_configuration | VMFBlackPanel | BOOL ||
| vehicle_configuration | VMFCMBColor | BOOL ||
| vehicle_configuration | VMFCMBConf | BOOL ||
| vehicle_configuration | VMFCourtLight | BOOL ||
| vehicle_configuration | VMFFirstPage | BOOL ||
| vehicle_configuration | VMFFuncState | BOOL ||
| vehicle_configuration | VMFProfile | BOOL ||
| vehicle_configuration | Vehicle_Type | INTEGER ||
| vehicle_configuration | Welcome_Lighting | BOOL ||
| vehicle_configuration | Windows_Partial_Opening | BOOL ||