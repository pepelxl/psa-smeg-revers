# таблица автомобильных кузовов
Распологается в \SYSTEM\Data_base\sqlite\db_alerts.sqlite -> Vhl_list

|Config|Vhl|Имя|
|:---|:---|---|
| 0x0001 | E3 | citroen C4 Cactus|
| 0x0100 | A90 | peugeot 208 3-двери |
| 0x0101 | A91 | peugeot 208 5-дверей |
| 0x0104 | A94 | peugeot 2008 |
| 0x0108 | A94MV | peugeot 2008 1 рестайлинг|
| 0x0601 | W23 | peugeot 508 ?|
| 0x0602 | W22W24 | W22 - peugeot 508 SW ?<br>W24 - peugeot 508 RXH ?|
| 0x0801 | B71 | citroen C4 II |
| 0x0803 | B73R | citroen C4 II Russie |
| 0x0805 | B75 | citroen DS4 |
| 0x3001 | B785 | citroen C4 Picasso II |
| 0x3008 | B787 | citroen C4 Grand Picasso II |
| 0x3101 | T91 | peugeot 308|
| 0x3102 | T92 | peugeot 308 SW|


Предположение: столбец конфиг является составным.<br>
Config[1]=Vehicle_Type<br>
Config[0]=Bodywork_Type<br>
Пример: citroen C4 grand picasso = 0x3008 Vehicle_Type=48 Bodywork_Type=8<br>
Соответственно силуэт должен присутствовать в выбраной теме<br>
