# Arduino Introduction



This repository is the result of my first tests with an Arduino to introduce myself to electronics. 

Therefore, I if you see any inacurracy within codes, schematics or readmes, please feel free to comment in comment section.

I hope this repo would help others to start with electronics.



This ```/tests``` contains basic tests I have done with components comming from elegoo introductory kit and other basic sensors kit.

This repo aggregate many examples (code + schematics) I have found here and there. _I have tested them all._ Those examples or generally so basic that they or often thought for further component testing.



More simple examples but mixing several components are in ```/basics```.


## Component list

Here is the list of components I have used. Corresponding datasheets are in ```/datasheets```.
This is composed by an elegoo beginner kit clone and a 37-sensor kit such as described [here](https://www.instructables.com/Arduino-37-in-1-Sensors-Kit-Explained/) . All of that cost me around 30€ (official Arduino excluded) on some Chinese sellers.

### Sensors

| Type | Name |Output type|Range | Precision/Sensitiveness<sup>1<sup> | response time (ms)<sup>2<sup> |Cost(€)<sup>3<sup> | Comments| Datasheet_file |
| ------------- | ------------- |------------- |------------- |------------- |------------- |------------- |------------- | ------------- |
| Temperature + Hygrometry  |DHT11  |Digital||+/- 1°C / +/- 15%||~3|hygrometry value often 10-15% lower than real value| DHT11.pdf |
| Temperature       | DS18B20  |Digital             |  -55°C/+125°C |±0.5°C(-10°C to +85°C)|            |       |  |ds18b20.pdf|
|Rotary encoder | KY-040  | Digital  ||360/22°||~3  |   |KY-040-Joy-IT.pdf |
| Temperature  | KY-013| Analog  ||+/- 0.5°C|NA|0.05  | based on thermoresistor NTC-MF52 3950K  |KY-013-Joy-IT.pdf (MF52.pdf) |
| Temperature  | KY-028|Digital  |-55°C to 125°C|+/- 0.5°C|NA| ~5  |NTC-MF52 3950K with LM393 dual differential comparator, a 3296W trimmer potentiometer. Since potentiometer is directly plugged on NTC resistance, absolute temperature cannot be deduced from analog output. The latter fixes digital threshold value.  |KY-028.pdf (MF52.pdf) |
| Brightness |GL5528  |Analog  ||NA|30|0.10  | Photoresistance  |GL55.PDF |
|joystick       |HW-504  | Analog              ||             |     NA       |       |  |HW504.pdf|
|light barrier       |KY-010  | Digital              ||             |            |       |Based on IR detection |KY-010.PDF|
|Hall sensor - digital        |A3144  | Digital(Switch)              ||             |            |       North/South sensitive|A3141.PDF|
|Hall sensor - analog        |49E503  | Analog              |1.9mV/GS|             |            |       |North/South sensitive: returns positive/negative values.|49E.PDF|
|Reed switch        |KY-021| Digital(Switch)  ||ON:10-40 AT/ OFF:6-25 AT |500Hz     |       |Not concerned by North/South magnetic poles.Probably based on an RM-1318, I am unable to test magnetic field values.For AT unit, see p.6[here](https://www.relay.com.tw/fr/faq/bright_toward_faq-15.html).|RRE_Reed_Switch_Catalog.pdf|
|Reed switch - converted  |KY-025| Digital  ||NA             | 500Hz     |       |Potentiometer modulate sensitivity, no build-in threshold value|KY-025-Joy-IT.pdf|

Most of modules tested above are KY modules. For a good understanding of thoses sensors, I prefer to give key component characteristics and datasheet, especially for modules only adding a couple of resitors.

1: Values given are sensitiveness for analog sensors, precision for digital captors and threshold values for switches.

2: Or max working frequency (Hz) for switches

3: Values are taken from spare components offers on AliExpress. (01/2026)



### Outputs

|Type | Name |Input | Max frequency/Precision | response time(ms) |Cost(€) | Comments|Datasheet_file|
| ------------- | ------------- |------------- |------------- |------------- |------------- |------------- |------------- |
|active buzzer | TMB12A05       | Digital     |                  |                 |              |Contains an integrated oscillator contrary to passive buzzers|TMB12A05.pdf|
|passive buzzer |HC12085 | Analog  |||0.20  |Uncertain reference name|p.19 buzzer-datasheet.pdf |
|7 segment digit display |        | Analog              |             |            | NA      |            | | |
|4-digits 7-segment digit display | | Analog  |||  |   | ||

### Controllers

|Type | Name |Input | Max frequency/Precision | response time(ms) |Cost(€) | Comments|Datasheet_file|
| ------------- | ------------- |------------- |------------- |------------- |------------- |------------- |------------- |
|H Bridge |  L293D     | Binary + PWM     |                  |                 |              |            |for small (low current) motors|L293D.pdf|
|H Bridge |   L298N      | Binary + PWM     |                  |                 |              |            |for medium motors (see [here](https://racheldebarros.com/guide-to-choosing-the-best-dc-motor-drivers-for-arduino/)) |L298.pdf|
|LED serialiser|  MAX7219 CNG     | SPI     |                  |                 |              |            |control up to 64 LEDs, for LEDs matrices or 7segment digits diplays|MAX7219.PDF|


