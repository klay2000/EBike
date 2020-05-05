EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 4 4
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
L power:GND #PWR016
U 1 1 5E65B9DC
P 1300 3200
F 0 "#PWR016" H 1300 2950 50  0001 C CNN
F 1 "GND" V 1305 3072 50  0000 R CNN
F 2 "" H 1300 3200 50  0001 C CNN
F 3 "" H 1300 3200 50  0001 C CNN
	1    1300 3200
	0    1    1    0   
$EndComp
Text GLabel 1300 2500 0    50   Input ~ 0
3v3
$Comp
L power:GND #PWR018
U 1 1 5E65BF45
P 2000 3500
F 0 "#PWR018" H 2000 3250 50  0001 C CNN
F 1 "GND" H 2005 3327 50  0000 C CNN
F 2 "" H 2000 3500 50  0001 C CNN
F 3 "" H 2000 3500 50  0001 C CNN
	1    2000 3500
	1    0    0    -1  
$EndComp
Text GLabel 1300 1600 0    50   Input ~ 0
IOExpanderCS
Text GLabel 1300 1700 0    50   Input ~ 0
SCK
Text GLabel 1300 1800 0    50   Input ~ 0
MOSI
Text GLabel 1300 1900 0    50   Input ~ 0
MISO
$Comp
L Connector:Conn_01x05_Female J9
U 1 1 5E65C67B
P 3350 2100
F 0 "J9" H 3378 2126 50  0000 L CNN
F 1 "Conn_01x05_Female" H 3378 2035 50  0000 L CNN
F 2 "Connector_JST:JST_XH_B5B-XH-AM_1x05_P2.50mm_Vertical" H 3350 2100 50  0001 C CNN
F 3 "~" H 3350 2100 50  0001 C CNN
	1    3350 2100
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x05_Female J8
U 1 1 5E661E08
P 3350 1600
F 0 "J8" H 3378 1626 50  0000 L CNN
F 1 "Conn_01x05_Female" H 3378 1535 50  0000 L CNN
F 2 "Connector_JST:JST_XH_B5B-XH-AM_1x05_P2.50mm_Vertical" H 3350 1600 50  0001 C CNN
F 3 "~" H 3350 1600 50  0001 C CNN
	1    3350 1600
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x05_Female J10
U 1 1 5E663953
P 3350 2600
F 0 "J10" H 3378 2626 50  0000 L CNN
F 1 "Conn_01x05_Female" H 3378 2535 50  0000 L CNN
F 2 "Connector_JST:JST_XH_B5B-XH-AM_1x05_P2.50mm_Vertical" H 3350 2600 50  0001 C CNN
F 3 "~" H 3350 2600 50  0001 C CNN
	1    3350 2600
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x05_Female J11
U 1 1 5E6653C1
P 3350 3100
F 0 "J11" H 3378 3126 50  0000 L CNN
F 1 "Conn_01x05_Female" H 3378 3035 50  0000 L CNN
F 2 "Connector_JST:JST_XH_B5B-XH-AM_1x05_P2.50mm_Vertical" H 3350 3100 50  0001 C CNN
F 3 "~" H 3350 3100 50  0001 C CNN
	1    3350 3100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR019
U 1 1 5E66683A
P 3150 1400
F 0 "#PWR019" H 3150 1150 50  0001 C CNN
F 1 "GND" V 3155 1272 50  0000 R CNN
F 2 "" H 3150 1400 50  0001 C CNN
F 3 "" H 3150 1400 50  0001 C CNN
	1    3150 1400
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR020
U 1 1 5E666AF7
P 3150 1900
F 0 "#PWR020" H 3150 1650 50  0001 C CNN
F 1 "GND" V 3155 1772 50  0000 R CNN
F 2 "" H 3150 1900 50  0001 C CNN
F 3 "" H 3150 1900 50  0001 C CNN
	1    3150 1900
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR021
U 1 1 5E667166
P 3150 2400
F 0 "#PWR021" H 3150 2150 50  0001 C CNN
F 1 "GND" V 3155 2272 50  0000 R CNN
F 2 "" H 3150 2400 50  0001 C CNN
F 3 "" H 3150 2400 50  0001 C CNN
	1    3150 2400
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR022
U 1 1 5E66745F
P 3150 2900
F 0 "#PWR022" H 3150 2650 50  0001 C CNN
F 1 "GND" V 3155 2772 50  0000 R CNN
F 2 "" H 3150 2900 50  0001 C CNN
F 3 "" H 3150 2900 50  0001 C CNN
	1    3150 2900
	0    1    1    0   
$EndComp
Wire Wire Line
	2700 2300 3150 2300
Wire Wire Line
	3150 2200 2700 2200
Wire Wire Line
	3150 2100 2700 2100
Wire Wire Line
	2700 2000 3150 2000
Wire Wire Line
	3150 1800 2850 1800
Wire Wire Line
	2850 1800 2850 1900
Wire Wire Line
	2850 1900 2700 1900
Wire Wire Line
	2700 1800 2800 1800
Wire Wire Line
	2800 1800 2800 1700
Wire Wire Line
	2800 1700 3150 1700
Wire Wire Line
	3150 1600 2750 1600
Wire Wire Line
	2750 1600 2750 1700
Wire Wire Line
	2750 1700 2700 1700
Wire Wire Line
	3150 1500 2700 1500
Wire Wire Line
	2700 1500 2700 1600
Wire Wire Line
	3150 2500 2700 2500
Wire Wire Line
	3150 2600 2700 2600
Wire Wire Line
	3150 2700 2700 2700
Wire Wire Line
	2700 2800 3150 2800
Wire Wire Line
	3150 3300 2700 3300
Wire Wire Line
	3150 3200 2750 3200
Wire Wire Line
	2750 3200 2750 3100
Wire Wire Line
	2750 3100 2700 3100
Wire Wire Line
	3150 3100 2800 3100
Wire Wire Line
	2800 3100 2800 3000
Wire Wire Line
	2800 3000 2700 3000
Wire Wire Line
	3150 3000 2850 3000
Wire Wire Line
	2850 3000 2850 2900
Wire Wire Line
	2850 2900 2700 2900
Connection ~ 1300 3100
Connection ~ 1300 3200
Wire Wire Line
	2700 3300 2700 3200
Wire Wire Line
	1300 3200 1300 3100
Wire Wire Line
	1300 3100 1300 3000
$Comp
L Interface_Expansion:MCP23S17_SO U3
U 1 1 5E658088
P 2000 2400
F 0 "U3" H 2000 3681 50  0000 C CNN
F 1 "MCP23S17_SO" H 2000 3590 50  0000 C CNN
F 2 "Package_SO:SOIC-28W_7.5x17.9mm_P1.27mm" H 2200 1400 50  0001 L CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/20001952C.pdf" H 2200 1300 50  0001 L CNN
	1    2000 2400
	1    0    0    -1  
$EndComp
$Comp
L Device:C C8
U 1 1 5E695457
P 1400 1150
F 0 "C8" H 1515 1196 50  0000 L CNN
F 1 "0.1uf" H 1515 1105 50  0000 L CNN
F 2 "Resistor_SMD:R_0201_0603Metric" H 1438 1000 50  0001 C CNN
F 3 "~" H 1400 1150 50  0001 C CNN
	1    1400 1150
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR017
U 1 1 5E695B6A
P 1400 1000
F 0 "#PWR017" H 1400 750 50  0001 C CNN
F 1 "GND" H 1405 827 50  0000 C CNN
F 2 "" H 1400 1000 50  0001 C CNN
F 3 "" H 1400 1000 50  0001 C CNN
	1    1400 1000
	-1   0    0    1   
$EndComp
Wire Wire Line
	1400 1300 2000 1300
Text GLabel 1400 1300 0    50   Input ~ 0
3v3
$EndSCHEMATC
