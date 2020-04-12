EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 5
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L power:GND #PWR09
U 1 1 5E5EBF95
P 4500 4350
F 0 "#PWR09" H 4500 4100 50  0001 C CNN
F 1 "GND" H 4505 4177 50  0000 C CNN
F 2 "" H 4500 4350 50  0001 C CNN
F 3 "" H 4500 4350 50  0001 C CNN
	1    4500 4350
	1    0    0    -1  
$EndComp
$Comp
L dk_RF-Transceiver-Modules:ESP32-WROOM-32 MOD1
U 1 1 5E5EAEA2
P 4200 2250
F 0 "MOD1" H 4400 2553 60  0000 C CNN
F 1 "ESP32-WROOM-32" H 4400 2447 60  0000 C CNN
F 2 "digikey-footprints:ESP32-WROOM-32D" H 4400 2450 60  0001 L CNN
F 3 "https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32_datasheet_en.pdf" H 4400 2550 60  0001 L CNN
F 4 "1904-1010-1-ND" H 4400 2650 60  0001 L CNN "Digi-Key_PN"
F 5 "ESP32-WROOM-32" H 4400 2750 60  0001 L CNN "MPN"
F 6 "RF/IF and RFID" H 4400 2850 60  0001 L CNN "Category"
F 7 "RF Transceiver Modules" H 4400 2950 60  0001 L CNN "Family"
F 8 "https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32_datasheet_en.pdf" H 4400 3050 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/espressif-systems/ESP32-WROOM-32/1904-1010-1-ND/8544305" H 4400 3150 60  0001 L CNN "DK_Detail_Page"
F 10 "SMD MODULE, ESP32-D0WDQ6, 32MBIT" H 4400 3250 60  0001 L CNN "Description"
F 11 "Espressif Systems" H 4400 3350 60  0001 L CNN "Manufacturer"
F 12 "Active" H 4400 3450 60  0001 L CNN "Status"
	1    4200 2250
	1    0    0    -1  
$EndComp
Wire Wire Line
	4500 4350 4400 4350
Connection ~ 4500 4350
Connection ~ 4300 4350
Wire Wire Line
	4300 4350 4200 4350
Connection ~ 4400 4350
Wire Wire Line
	4400 4350 4300 4350
Wire Wire Line
	4400 2150 4950 2150
Text GLabel 4950 2150 2    50   Input ~ 0
3v3
Text GLabel 3600 2200 1    50   Input ~ 0
RTS
Text GLabel 3700 2450 0    50   Input ~ 0
DTR
Text GLabel 5100 3250 2    50   Input ~ 0
RXD
Text GLabel 5100 3150 2    50   Input ~ 0
TXD
Text GLabel 3700 3450 0    50   Input ~ 0
SCK
Text GLabel 3700 3550 0    50   Input ~ 0
MISO
Text GLabel 3700 3850 0    50   Input ~ 0
MOSI
$Comp
L Connector:Conn_01x03_Female J5
U 1 1 5E66E54D
P 3100 800
F 0 "J5" V 3038 612 50  0000 R CNN
F 1 "Conn_01x03_Female" V 2947 612 50  0000 R CNN
F 2 "Connector_JST:JST_XH_B3B-XH-AM_1x03_P2.50mm_Vertical" H 3100 800 50  0001 C CNN
F 3 "~" H 3100 800 50  0001 C CNN
	1    3100 800 
	0    -1   -1   0   
$EndComp
$Comp
L Connector:Conn_01x05_Female J2
U 1 1 5E66FACA
P 1700 800
F 0 "J2" V 1638 512 50  0000 R CNN
F 1 "Conn_01x05_Female" V 1547 512 50  0000 R CNN
F 2 "Connector_JST:JST_XH_B5B-XH-AM_1x05_P2.50mm_Vertical" H 1700 800 50  0001 C CNN
F 3 "~" H 1700 800 50  0001 C CNN
	1    1700 800 
	0    -1   -1   0   
$EndComp
Text GLabel 1500 1000 3    50   Input ~ 0
MISO
Text GLabel 1600 1000 3    50   Input ~ 0
MOSI
Text GLabel 1700 1000 3    50   Input ~ 0
SCK
Text GLabel 1800 1000 3    50   Input ~ 0
3v3
$Comp
L power:GND #PWR06
U 1 1 5E670FDF
P 1900 1000
F 0 "#PWR06" H 1900 750 50  0001 C CNN
F 1 "GND" H 1905 827 50  0000 C CNN
F 2 "" H 1900 1000 50  0001 C CNN
F 3 "" H 1900 1000 50  0001 C CNN
	1    1900 1000
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR08
U 1 1 5E6715FF
P 3200 1000
F 0 "#PWR08" H 3200 750 50  0001 C CNN
F 1 "GND" H 3205 827 50  0000 C CNN
F 2 "" H 3200 1000 50  0001 C CNN
F 3 "" H 3200 1000 50  0001 C CNN
	1    3200 1000
	1    0    0    -1  
$EndComp
Text GLabel 3100 1000 3    50   Input ~ 0
3v3
Text Label 3000 1300 1    50   ~ 0
Throttle
Wire Wire Line
	3000 1000 3000 1300
Text Label 5400 3550 2    50   ~ 0
Throttle
Wire Wire Line
	5100 3550 5400 3550
Text GLabel 5100 3750 2    50   Input ~ 0
IOExpanderCS
$Comp
L Connector:Conn_01x04_Female J6
U 1 1 5E6788F7
P 4600 800
F 0 "J6" V 4538 512 50  0000 R CNN
F 1 "Conn_01x04_Female" V 4447 512 50  0000 R CNN
F 2 "Connector_JST:JST_XH_B4B-XH-AM_1x04_P2.50mm_Vertical" H 4600 800 50  0001 C CNN
F 3 "~" H 4600 800 50  0001 C CNN
	1    4600 800 
	0    -1   -1   0   
$EndComp
Text Label 4600 1350 1    50   ~ 0
ExtraCS1
Text Label 4700 1350 1    50   ~ 0
ExtraCS2
Text Label 4800 1350 1    50   ~ 0
ExtraCS3
Text Label 4500 1350 1    50   ~ 0
NFC_CS
Wire Wire Line
	4500 1000 4500 1350
Wire Wire Line
	4600 1350 4600 1000
Wire Wire Line
	4700 1000 4700 1350
Wire Wire Line
	4800 1350 4800 1000
Text Label 3300 2750 0    50   ~ 0
ExtraCS1
Text Label 3300 2950 0    50   ~ 0
ExtraCS2
Text Label 5500 3650 2    50   ~ 0
ExtraCS3
Text Label 3350 3050 0    50   ~ 0
NFC_CS
Wire Wire Line
	5500 3650 5100 3650
Wire Wire Line
	3300 2950 3700 2950
Wire Wire Line
	3300 2750 3700 2750
$Comp
L Connector:Conn_01x02_Female J4
U 1 1 5E67B7F3
P 2850 3350
F 0 "J4" H 2742 3025 50  0000 C CNN
F 1 "Conn_01x02_Female" H 2742 3116 50  0000 C CNN
F 2 "Connector_JST:JST_XH_B2B-XH-AM_1x02_P2.50mm_Vertical" H 2850 3350 50  0001 C CNN
F 3 "~" H 2850 3350 50  0001 C CNN
	1    2850 3350
	-1   0    0    1   
$EndComp
Wire Wire Line
	3700 3250 3050 3250
Wire Wire Line
	3050 3350 3700 3350
Text Label 3300 3250 0    50   ~ 0
UART_RX
Text Label 3300 3350 0    50   ~ 0
UART_TX
Wire Wire Line
	3350 3050 3700 3050
$Comp
L Device:R R3
U 1 1 5E67E09B
P 3550 4150
F 0 "R3" V 3343 4150 50  0000 C CNN
F 1 "65" V 3434 4150 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 3480 4150 50  0001 C CNN
F 3 "~" H 3550 4150 50  0001 C CNN
	1    3550 4150
	0    1    1    0   
$EndComp
$Comp
L Device:R R2
U 1 1 5E681AA6
P 3250 4050
F 0 "R2" V 3043 4050 50  0000 C CNN
F 1 "65" V 3134 4050 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 3180 4050 50  0001 C CNN
F 3 "~" H 3250 4050 50  0001 C CNN
	1    3250 4050
	0    1    1    0   
$EndComp
$Comp
L Device:R R1
U 1 1 5E682633
P 2950 3950
F 0 "R1" V 2743 3950 50  0000 C CNN
F 1 "65" V 2834 3950 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 2880 3950 50  0001 C CNN
F 3 "~" H 2950 3950 50  0001 C CNN
	1    2950 3950
	0    1    1    0   
$EndComp
Wire Wire Line
	3700 4050 3400 4050
Wire Wire Line
	3700 3950 3100 3950
$Comp
L Connector:Conn_01x04_Female J3
U 1 1 5E682F30
P 2600 4150
F 0 "J3" H 2492 3725 50  0000 C CNN
F 1 "Conn_01x04_Female" H 2492 3816 50  0000 C CNN
F 2 "Connector_JST:JST_XH_B4B-XH-AM_1x04_P2.50mm_Vertical" H 2600 4150 50  0001 C CNN
F 3 "~" H 2600 4150 50  0001 C CNN
	1    2600 4150
	-1   0    0    1   
$EndComp
Wire Wire Line
	3100 4050 2800 4050
Wire Wire Line
	2800 4150 3400 4150
$Comp
L power:GND #PWR07
U 1 1 5E685007
P 2800 4250
F 0 "#PWR07" H 2800 4000 50  0001 C CNN
F 1 "GND" H 2805 4077 50  0000 C CNN
F 2 "" H 2800 4250 50  0001 C CNN
F 3 "" H 2800 4250 50  0001 C CNN
	1    2800 4250
	0    -1   -1   0   
$EndComp
Text GLabel 3150 2350 0    50   Input ~ 0
3v3
$Comp
L Switch:SW_Push SW1
U 1 1 5E94724B
P 3350 2350
F 0 "SW1" H 3350 2635 50  0000 C CNN
F 1 "SW_Push" H 3350 2544 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm" H 3350 2550 50  0001 C CNN
F 3 "~" H 3350 2550 50  0001 C CNN
	1    3350 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	3550 2350 3600 2350
Wire Wire Line
	3600 2200 3600 2350
Connection ~ 3600 2350
Wire Wire Line
	3600 2350 3700 2350
$EndSCHEMATC
