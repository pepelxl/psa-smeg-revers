# таблица автомобильных кузовов
Распологается в \SYSTEM\Data_base\sqlite\db_alerts.sqlite -> Vhl_list  
Из прошивки 5.43.A.R2   
|Config|Vhl|Имя|
|:---|:---|---|
| 0x0001 | E3 | citroen C4 Cactus|
| 0x0100 | A90 | peugeot 208 3-двери |
| 0x0101 | A91 | peugeot 208 5-дверей |
| 0x0104 | A94 | peugeot 2008 |
| 0x0108 | A94MV | peugeot 2008 1 рестайлинг |
| 0x0601 | W23 | peugeot 508 ?|
| 0x0602 | W22W24 | W22 - peugeot 508 SW ?<br>W24 - peugeot 508 RXH ?|
| 0x0801 | B71 | citroen C4 II |
| 0x0803 | B73R | citroen C4 II Russie |
| 0x0805 | B75 | citroen DS4 |
| 0x3001 | B785 | citroen C4 Picasso II |
| 0x3008 | B787 | citroen C4 Grand Picasso II |
| 0x3101 | T91 | peugeot 308|
| 0x3102 | T92 | peugeot 308 SW|

столбец конфиг является составным.<br>
Config[1]=Vehicle_Type<br>
Config[0]=Bodywork_Type<br>
Пример: citroen C4 grand picasso = 0x3008 Vehicle_Type=48 Bodywork_Type=8<br>
Соответственно силуэт должен присутствовать в выбраной теме<br>

Из прошивки 6.4.A.R10
|Config|Vhl|TemplateSuffix|Имя|
|:---|:---|---|---|
| 0x010000	| A90	| | peugeot 208 3-двери |
| 0x010001	| Ai90	| | peugeot 208 Mercosur 3-двери |
| 0x010100	| A91	| | peugeot 208 5-дверей |
| 0x010101	| Ai91	| | peugeot 208 Mercosur 5-дверей |
| 0x010400	| A94	| | peugeot 2008 |
| 0x010401	| Ai94	| | peugeot 2008 Mercosur |
| 0x010404	| A94MV	| | peugeot 2008 1 рестайлинг |
| 0x020200	| X72	| | citroen C5 II универсал |
| 0x020300	| X73	| | citroen C5 II седан|
| 0x030101	| T71A	| | |
| 0x030301	| T73A	| |  |
| 0x030302	| T73R	| | peugeot 408 |
| 0x040100	| A51	| |  |
| 0x040101	| Ai51	| |  |
| 0x040500	| A55	| | DS3 |
| 0x040504	| A55MV	| | DS3 1 рестайлинг|
| 0x040600	| A56	| |  |
| 0x040604	| A56MV	| |  |
| 0x040801	| Ai58R	| |  |
| 0x070800	| B981	| _1 |  |
| 0x070810	| B981	| _2 |  |
| 0x070900	| B991	| _1 |  |
| 0x070908	| B992	| |  |
| 0x070910	| B991	| _2 |  |
| 0x080100	| B71	| | citroen C4 II |
| 0x080500	| B75	| | citroen DS4 |
| 0x090100	| B81	| | DS5 |
| 0x080301	| B73M	| | citroen C4 II mercosur |
| 0x080302	| B73R	| | citroen C4 II Russie |
| 0x080306	| B731RMV	| |  |
| 0x08030e	| B732RMV	| |  |







