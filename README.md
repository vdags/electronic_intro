# Arduino Introduction



This repository is the result of my first tests with an Arduino to introduce myself to electronics. 

Therefore, I if you see any inacurracy within codes, schematics or readmes, please feel free to comment in comment section.

I hope this repo would help others to start with electronics.



This ```/tests``` contains basic tests I have done with components comming from elegoo introductory kit and other basic sensors kit.

This repo aggregate many examples (code + schematics) I have found here and there. _I have tested them all._ Those examples or generally so basic that they or often thought for further component testing.



More simple examples but mixing several components are in ```/basics```.


## Component list

Here is the list of components I have used. Corresponding datasheets are in ```/datasheets```.
All of that cost me around 30€ (Arduino excluded) on some Chinese sellers, for the components I have tested, all of them where working.

### Sensors

| Name| Measure |Output type| Precision | response time(ms) |Cost(€) |Complete Name | Comments|
| ------------- | ------------- |------------- |------------- |------------- |------------- |------------- |------------- |
| DHT11| Temperature + Hygrometry  |Digital|+/- 1°C / +/- 15%||~3|DHT11  |hygrometry value often 10-15% lower than real value|
|Photoresistance| Ligth |Analog  |NA|30|0.10  | GL5528  |  |

### Displays

|Type | Name |Input | Max frequency/Precision | response time(ms) |Cost(€) | Comments|Datasheet_file|
| ------------- | ------------- |------------- |------------- |------------- |------------- |------------- |------------- |
|active buzzer | TMB12A05       | Digital     |                  |                 |              |            |Contains an integrated oscillator contrary to passive buzzers|TMB12A05.pdf|
|passive buzzer |HC12085 | Analog  |||0.20  |   | Uncertain reference name|p.19 buzzer-datasheet.pdf |
|joystick | HW-504       | Analog              |             |            | NA      |            |Contains an integrated oscillator contrary to passive buzzers|HW504.pdf|
