База db_alerts содержит таблицы для идентификации применяемости изображений и надписей. Вся структура ведёт к выбору нужного ID изображения или надписи. Если таблица указывает на текст, то по ID обращаемся ко второму блоку harmony.bin, берём из блока указатель на текст локализации, находящийся в system\Data_base\boardfs\GUI_STYLE\GUIS_RESSOURCES\gui_texts. Если таблица указывает на изображение, то обращаемся к третьему блоку harmony.bin, берём из блока указатель на изображение,  находящиеся в одинадцатом блоке harmony.bin.

## alerts
Таблица содержит все сообщения для всплывающего окна предупреждений

## jda_alerts
Речь, скорее всего, идёт о журнале предупреждений, находящийся в меню drive под кнопкой check.

## city_park_cam и city_park_no_cam
Речь, скорее всего, идёт о полуавтоматической парковке.

## PanelRaference
Содержит id вкладок для меню драйв используемых в данной базе

|PanelId|PanelName|Описание|
|:---|:---|:---|
|4|DRIVE_CityParkNoCam_BSC_Z3
|5|DRIVE_CityParkAndCam_BSC_Z3
|8|DRIVE_VehicleParametersMenu_M3Z_Z4|Вкладка настроек автомобиля|
|9|DRIVE_GenericParameter_INF_Z4|Описание пункта настройки автомобиля|
|10|DRIVE_FMHSetting_CFP_Z4
|11|DRIVE_WelcomeLightingSettings_CFP_Z4
|12|DRIVE_AmbianceLightingSettings_CFP_Z4
|13|DRIVE_CollisionSettings_CFP_Z4
|22|DRIVE_ObstacleDetection_BSC_Z3
|23|DRIVE_MixedVisuObst_ALT_Z3
|28|DRIVE_AccessAlert_ALT_Z3
|29|DRIVE_Popup_DSGAlert_ALT_Z3

## labels
В этой таблице выбираются **ID** для текста настроек автомобиля

## Silhouette
В этой таблице выбираются **ID** силуэтов автомобиля

## Vhl_list
В этой таблице находится список поддерживаемых силуэтов. [подробнее](/vehicle.md)

## vhl_param_order
Эта таблица служит для сортировки пунктов настроек автомобиля по вкладкам и спискам.

|IndexParam|Описание на французком|Описание|Пример изображения|
|:---|:---|:---|---|
|0|Essuie vitre arrière en marche arrière||![alt text](/image/param0.png)|
|1|Aide au stationnement||![alt text](/image/param1.png)|
|2|Aide au dépassement||![alt text](/image/param2.png)|
|3|Frein de parking automatique||![alt text](/image/param3.png)|
|4|Harmonie sonore|||
|5|Alerte risque collision||![alt text](/image/param5.png)|
|6|Freinage d’urgence automatique||![alt text](/image/param6.png)|
|7|Réglage auto du rétroviseur en marche arrière||![alt text](/image/param7.png)|
|8|Action plip cabine|||
|9|Allumage automatique des projecteurs||![alt text](/image/param9.png)|
|10|Eclairage d’accompagnement||![alt text](/image/param10.png)|
|11|Eclairage d’accueil||![alt text](/image/param11.png)|
|12|Eclairage adaptatif||![alt text](/image/param12.png)|
|13|Feux diurnes||![alt text](/image/param13.png)|
|14|Eclairage d’ambiance||![alt text](/image/param14.bmp)|
|15|Motorisation du volet arrière||![alt text](/image/param15.png)|
|16|Accueil conducteur|||
|17|Action plip conducteur||![alt text](/image/param17.png)|
|18|Déverrouillage portes||![alt text](/image/param18.png)|
|19|Allumage calandre|||
|20|FARC urbain||![alt text](/image/param20.png)|
|21|Allumage feux autoroute|||
|22|Eclairage d’ambiance avec niveau||![alt text](/image/param22.bmp)|
