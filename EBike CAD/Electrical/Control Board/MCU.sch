EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 3
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
L MCU_ST_STM32F1:STM32F103C8Tx U?
U 1 1 5E19DD09
P 3000 4200
AR Path="/5E19DD09" Ref="U?"  Part="1" 
AR Path="/5E197BD6/5E19DD09" Ref="U?"  Part="1" 
F 0 "U?" H 2950 2611 50  0000 C CNN
F 1 "STM32F103C8Tx" H 2950 2520 50  0000 C CNN
F 2 "Package_QFP:LQFP-48_7x7mm_P0.5mm" H 2400 2800 50  0001 R CNN
F 3 "http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/CD00161566.pdf" H 3000 4200 50  0001 C CNN
	1    3000 4200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E19DD0F
P 3450 5900
AR Path="/5E19DD0F" Ref="#PWR?"  Part="1" 
AR Path="/5E197BD6/5E19DD0F" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 3450 5650 50  0001 C CNN
F 1 "GND" H 3455 5727 50  0000 C CNN
F 2 "" H 3450 5900 50  0001 C CNN
F 3 "" H 3450 5900 50  0001 C CNN
	1    3450 5900
	1    0    0    -1  
$EndComp
Wire Wire Line
	2800 5700 2900 5700
Wire Wire Line
	2900 5700 3000 5700
Connection ~ 2900 5700
Wire Wire Line
	3000 5700 3100 5700
Connection ~ 3000 5700
Wire Wire Line
	3100 5700 3450 5700
Wire Wire Line
	3450 5700 3450 5900
Connection ~ 3100 5700
$Comp
L power:+3.3V #PWR?
U 1 1 5E19DD1D
P 2800 1500
AR Path="/5E19DD1D" Ref="#PWR?"  Part="1" 
AR Path="/5E197BD6/5E19DD1D" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 2800 1350 50  0001 C CNN
F 1 "+3.3V" H 2815 1673 50  0000 C CNN
F 2 "" H 2800 1500 50  0001 C CNN
F 3 "" H 2800 1500 50  0001 C CNN
	1    2800 1500
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E19DD23
P 3100 1500
AR Path="/5E19DD23" Ref="#PWR?"  Part="1" 
AR Path="/5E197BD6/5E19DD23" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 3100 1250 50  0001 C CNN
F 1 "GND" H 3105 1327 50  0000 C CNN
F 2 "" H 3100 1500 50  0001 C CNN
F 3 "" H 3100 1500 50  0001 C CNN
	1    3100 1500
	-1   0    0    1   
$EndComp
Wire Wire Line
	2900 2700 2800 2700
Connection ~ 2800 2700
Wire Wire Line
	2900 2700 3000 2700
Connection ~ 2900 2700
Wire Wire Line
	3000 2700 3100 2700
Connection ~ 3000 2700
Wire Wire Line
	3100 2700 3200 2700
Connection ~ 3100 2700
$Comp
L Device:C C?
U 1 1 5E19DD31
P 2950 1650
AR Path="/5E19DD31" Ref="C?"  Part="1" 
AR Path="/5E197BD6/5E19DD31" Ref="C?"  Part="1" 
F 0 "C?" V 2698 1650 50  0000 C CNN
F 1 "10uf" V 2789 1650 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2988 1500 50  0001 C CNN
F 3 "~" H 2950 1650 50  0001 C CNN
	1    2950 1650
	0    1    1    0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E19DD37
P 2950 2050
AR Path="/5E19DD37" Ref="C?"  Part="1" 
AR Path="/5E197BD6/5E19DD37" Ref="C?"  Part="1" 
F 0 "C?" V 2698 2050 50  0000 C CNN
F 1 "100nf" V 2789 2050 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2988 1900 50  0001 C CNN
F 3 "~" H 2950 2050 50  0001 C CNN
	1    2950 2050
	0    1    1    0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E19DD3D
P 2950 2500
AR Path="/5E19DD3D" Ref="C?"  Part="1" 
AR Path="/5E197BD6/5E19DD3D" Ref="C?"  Part="1" 
F 0 "C?" V 2698 2500 50  0000 C CNN
F 1 "100nf" V 2789 2500 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2988 2350 50  0001 C CNN
F 3 "~" H 2950 2500 50  0001 C CNN
	1    2950 2500
	0    1    1    0   
$EndComp
Wire Wire Line
	2800 2500 2800 2700
$Comp
L Device:Jumper_NC_Dual JP?
U 1 1 5E19DD44
P 6000 5900
AR Path="/5E19DD44" Ref="JP?"  Part="1" 
AR Path="/5E197BD6/5E19DD44" Ref="JP?"  Part="1" 
F 0 "JP?" V 6046 6002 50  0000 L CNN
F 1 "Jumper_NC_Dual" V 5955 6002 50  0000 L CNN
F 2 "Jumper:SolderJumper-3_P1.3mm_Open_Pad1.0x1.5mm_NumberLabels" H 6000 5900 50  0001 C CNN
F 3 "~" H 6000 5900 50  0001 C CNN
	1    6000 5900
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E19DD4A
P 6000 6150
AR Path="/5E19DD4A" Ref="#PWR?"  Part="1" 
AR Path="/5E197BD6/5E19DD4A" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 6000 5900 50  0001 C CNN
F 1 "GND" H 6005 5977 50  0000 C CNN
F 2 "" H 6000 6150 50  0001 C CNN
F 3 "" H 6000 6150 50  0001 C CNN
	1    6000 6150
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 5E19DD50
P 6000 5650
AR Path="/5E19DD50" Ref="#PWR?"  Part="1" 
AR Path="/5E197BD6/5E19DD50" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 6000 5500 50  0001 C CNN
F 1 "+3.3V" H 6015 5823 50  0000 C CNN
F 2 "" H 6000 5650 50  0001 C CNN
F 3 "" H 6000 5650 50  0001 C CNN
	1    6000 5650
	1    0    0    -1  
$EndComp
Text GLabel 2300 2900 0    50   Input ~ 0
Reset
Wire Wire Line
	3100 1650 3100 2050
Connection ~ 3100 2050
Wire Wire Line
	3100 2050 3100 2500
Wire Wire Line
	2800 1650 2800 2050
Connection ~ 2800 2500
Connection ~ 2800 2050
Wire Wire Line
	2800 2050 2800 2500
Wire Wire Line
	3100 1650 3100 1500
Connection ~ 3100 1650
Wire Wire Line
	2800 1650 2800 1500
Connection ~ 2800 1650
$Comp
L Switch:SW_Push SW?
U 1 1 5E19DD62
P 6800 3000
AR Path="/5E19DD62" Ref="SW?"  Part="1" 
AR Path="/5E197BD6/5E19DD62" Ref="SW?"  Part="1" 
F 0 "SW?" H 6800 3285 50  0000 C CNN
F 1 "SW_Push" H 6800 3194 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H4.3mm" H 6800 3200 50  0001 C CNN
F 3 "~" H 6800 3200 50  0001 C CNN
	1    6800 3000
	1    0    0    -1  
$EndComp
Connection ~ 6600 3000
Wire Wire Line
	6600 3000 6500 3000
Connection ~ 7000 3300
Wire Wire Line
	7000 3300 6600 3300
Wire Wire Line
	7000 3000 7000 3300
$Comp
L power:GND #PWR?
U 1 1 5E19DD6D
P 7000 3300
AR Path="/5E19DD6D" Ref="#PWR?"  Part="1" 
AR Path="/5E197BD6/5E19DD6D" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 7000 3050 50  0001 C CNN
F 1 "GND" V 7005 3172 50  0000 R CNN
F 2 "" H 7000 3300 50  0001 C CNN
F 3 "" H 7000 3300 50  0001 C CNN
	1    7000 3300
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E19DD73
P 6600 3150
AR Path="/5E19DD73" Ref="C?"  Part="1" 
AR Path="/5E197BD6/5E19DD73" Ref="C?"  Part="1" 
F 0 "C?" H 6715 3196 50  0000 L CNN
F 1 "100nf" H 6715 3105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 6638 3000 50  0001 C CNN
F 3 "~" H 6600 3150 50  0001 C CNN
	1    6600 3150
	1    0    0    -1  
$EndComp
Text GLabel 6500 3000 0    50   Input ~ 0
Reset
$Comp
L Device:R R?
U 1 1 5E19DD7A
P 6300 5900
AR Path="/5E19DD7A" Ref="R?"  Part="1" 
AR Path="/5E197BD6/5E19DD7A" Ref="R?"  Part="1" 
F 0 "R?" V 6507 5900 50  0000 C CNN
F 1 "10k" V 6416 5900 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 6230 5900 50  0001 C CNN
F 3 "~" H 6300 5900 50  0001 C CNN
	1    6300 5900
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6150 5900 6100 5900
Wire Wire Line
	6150 4900 6100 4900
$Comp
L Device:R R?
U 1 1 5E19DD82
P 6300 4900
AR Path="/5E19DD82" Ref="R?"  Part="1" 
AR Path="/5E197BD6/5E19DD82" Ref="R?"  Part="1" 
F 0 "R?" V 6507 4900 50  0000 C CNN
F 1 "10k" V 6416 4900 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 6230 4900 50  0001 C CNN
F 3 "~" H 6300 4900 50  0001 C CNN
	1    6300 4900
	0    -1   -1   0   
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 5E19DD88
P 6000 4650
AR Path="/5E19DD88" Ref="#PWR?"  Part="1" 
AR Path="/5E197BD6/5E19DD88" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 6000 4500 50  0001 C CNN
F 1 "+3.3V" H 6015 4823 50  0000 C CNN
F 2 "" H 6000 4650 50  0001 C CNN
F 3 "" H 6000 4650 50  0001 C CNN
	1    6000 4650
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E19DD8E
P 6000 5150
AR Path="/5E19DD8E" Ref="#PWR?"  Part="1" 
AR Path="/5E197BD6/5E19DD8E" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 6000 4900 50  0001 C CNN
F 1 "GND" H 6005 4977 50  0000 C CNN
F 2 "" H 6000 5150 50  0001 C CNN
F 3 "" H 6000 5150 50  0001 C CNN
	1    6000 5150
	1    0    0    -1  
$EndComp
$Comp
L Device:Jumper_NC_Dual JP?
U 1 1 5E19DD94
P 6000 4900
AR Path="/5E19DD94" Ref="JP?"  Part="1" 
AR Path="/5E197BD6/5E19DD94" Ref="JP?"  Part="1" 
F 0 "JP?" V 6046 5002 50  0000 L CNN
F 1 "Jumper_NC_Dual" V 5955 5002 50  0000 L CNN
F 2 "Jumper:SolderJumper-3_P1.3mm_Open_Pad1.0x1.5mm_NumberLabels" H 6000 4900 50  0001 C CNN
F 3 "~" H 6000 4900 50  0001 C CNN
	1    6000 4900
	0    -1   -1   0   
$EndComp
Text GLabel 6450 5900 2    50   Input ~ 0
Boot_0
Text GLabel 2300 3100 0    50   Input ~ 0
Boot_0
Text GLabel 2300 4200 0    50   Input ~ 0
Boot_1
Text GLabel 6450 4900 2    50   Input ~ 0
Boot_1
$Comp
L Device:C_Small C?
U 1 1 5E1BA1F3
P 1850 3400
F 0 "C?" V 1621 3400 50  0000 C CNN
F 1 "27pf" V 1712 3400 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1850 3400 50  0001 C CNN
F 3 "~" H 1850 3400 50  0001 C CNN
	1    1850 3400
	0    -1   -1   0   
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5E1B9697
P 1850 3200
F 0 "C?" V 1621 3200 50  0000 C CNN
F 1 "27pf" V 1712 3200 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1850 3200 50  0001 C CNN
F 3 "~" H 1850 3200 50  0001 C CNN
	1    1850 3200
	0    1    1    0   
$EndComp
Wire Wire Line
	1250 3200 1550 3200
Wire Wire Line
	1250 3400 1550 3400
$Comp
L power:GND #PWR?
U 1 1 5E1B5509
P 1250 3400
F 0 "#PWR?" H 1250 3150 50  0001 C CNN
F 1 "GND" V 1255 3272 50  0000 R CNN
F 2 "" H 1250 3400 50  0001 C CNN
F 3 "" H 1250 3400 50  0001 C CNN
	1    1250 3400
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E1B4FAF
P 1250 3200
F 0 "#PWR?" H 1250 2950 50  0001 C CNN
F 1 "GND" V 1255 3072 50  0000 R CNN
F 2 "" H 1250 3200 50  0001 C CNN
F 3 "" H 1250 3200 50  0001 C CNN
	1    1250 3200
	0    1    1    0   
$EndComp
$Comp
L Device:Crystal_Small Y?
U 1 1 5E1A7BDE
P 1550 3300
F 0 "Y?" V 1504 3388 50  0000 L CNN
F 1 "8Mhz" V 1595 3388 50  0000 L CNN
F 2 "Crystal:Crystal_HC49-4H_Vertical" H 1550 3300 50  0001 C CNN
F 3 "~" H 1550 3300 50  0001 C CNN
	1    1550 3300
	0    -1   -1   0   
$EndComp
Wire Wire Line
	950  3950 1250 3950
Wire Wire Line
	950  3750 1250 3750
$Comp
L power:GND #PWR?
U 1 1 5E1B6347
P 950 3950
F 0 "#PWR?" H 950 3700 50  0001 C CNN
F 1 "GND" V 955 3822 50  0000 R CNN
F 2 "" H 950 3950 50  0001 C CNN
F 3 "" H 950 3950 50  0001 C CNN
	1    950  3950
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E1B6341
P 950 3750
F 0 "#PWR?" H 950 3500 50  0001 C CNN
F 1 "GND" V 955 3622 50  0000 R CNN
F 2 "" H 950 3750 50  0001 C CNN
F 3 "" H 950 3750 50  0001 C CNN
	1    950  3750
	0    1    1    0   
$EndComp
$Comp
L Device:Crystal_Small Y?
U 1 1 5E1AD8EB
P 1250 3850
F 0 "Y?" V 1204 3938 50  0000 L CNN
F 1 "32Khz" V 1295 3938 50  0000 L CNN
F 2 "Crystal:Crystal_Round_D2.0mm_Vertical" H 1250 3850 50  0001 C CNN
F 3 "~" H 1250 3850 50  0001 C CNN
	1    1250 3850
	0    -1   -1   0   
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5E1BAC09
P 1550 3950
F 0 "C?" V 1321 3950 50  0000 C CNN
F 1 "20pf" V 1412 3950 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1550 3950 50  0001 C CNN
F 3 "~" H 1550 3950 50  0001 C CNN
	1    1550 3950
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1450 3750 1250 3750
Connection ~ 1250 3750
Wire Wire Line
	1250 3950 1450 3950
Connection ~ 1250 3950
Wire Wire Line
	1650 3750 1650 3700
Wire Wire Line
	1650 3700 2300 3700
Wire Wire Line
	1650 3800 2300 3800
Wire Wire Line
	1650 3800 1650 3950
Wire Wire Line
	1550 3400 1750 3400
Wire Wire Line
	2300 3200 2300 3300
Wire Wire Line
	1750 3200 1550 3200
Connection ~ 1550 3200
Connection ~ 1550 3400
Wire Wire Line
	1950 3200 2300 3200
Wire Wire Line
	2300 3400 1950 3400
$Comp
L Device:C_Small C?
U 1 1 5E1BAC03
P 1550 3750
F 0 "C?" V 1321 3750 50  0000 C CNN
F 1 "20pf" V 1412 3750 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1550 3750 50  0001 C CNN
F 3 "~" H 1550 3750 50  0001 C CNN
	1    1550 3750
	0    1    1    0   
$EndComp
$EndSCHEMATC
