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

| Name| Measure |Output type| Precision | response time(ms) |Cost(€) |Complete Name | Comments| Datasheet_file |
| ------------- | ------------- |------------- |------------- |------------- |------------- |------------- |------------- | ------------- |
| DHT11| Temperature + Hygrometry  |Digital|+/- 1°C / +/- 15%||~3|DHT11  |hygrometry value often 10-15% lower than real value| GL55.pdf |
|Photoresistance| Brightnes |Analog  |NA|30|0.10  | GL5528  |  | |
|Rotary encoder| Angular position | Digital  |360/22°||~3  | KY-040  |  |KY-040-Joy-IT.pdf |
|Thermoresistor| Temperature  | Analog  |+/- 0.5°C|NA|0.05  | KY-013 (based on NTC-MF52 3950K) |  |KY-013-Joy-IT.pdf (MF52.pdf) |
|Thermoresistor module| Temperature  | Digital  |+/- 0.5°C|NA| ~5  | KY-028 (based on NTC-MF52 3950K) | NTC-MF52 3950K with digital converter |KY-028.pdf (MF52.pdf) |
|joystick | Angular position       | Analog              |             |     NA       |       | HW-504  | |HW504.pdf|


### Outputs

|Type | Name |Input | Max frequency/Precision | response time(ms) |Cost(€) | Comments|Datasheet_file|
| ------------- | ------------- |------------- |------------- |------------- |------------- |------------- |------------- |
|active buzzer | TMB12A05       | Digital     |                  |                 |              |            |Contains an integrated oscillator contrary to passive buzzers|TMB12A05.pdf|
|passive buzzer |HC12085 | Analog  |||0.20  |   | Uncertain reference name|p.19 buzzer-datasheet.pdf |
|7 segment digit display |        | Analog              |             |            | NA      |            | | |
|4-digits 7-segment digit display | | Analog  |||  |   | ||

### Controllers

|Type | Name |Input | Max frequency/Precision | response time(ms) |Cost(€) | Comments|Datasheet_file|
| ------------- | ------------- |------------- |------------- |------------- |------------- |------------- |------------- |
|H Bridge |  L293D     | Binary + PWM     |                  |                 |              |            |for small (low current) motors|L293D.pdf|
|H Bridge |   L298N      | Binary + PWM     |                  |                 |              |            |for medium motors (see [here](https://racheldebarros.com/guide-to-choosing-the-best-dc-motor-drivers-for-arduino/)) |L298.pdf|
|LED serialiser|  MAX7219 CNG     | SPI     |                  |                 |              |            |control up to 64 LEDs, for LEDs matrices or 7segment digits diplays|MAX7219.PDF|


