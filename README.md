# TRS80IJP

A remake of the TRS-80 Model I Japanese edition motherboard.

*More updates to follow*

![Build Board in Green](https://github.com/Board-Folk/TRS80IJP/blob/main/images/builtboardv1.0_small.jpg)

This reposistory contains the BOM, gerbers and Kicad files for a remake of the TEC, Japanese version of the TRS-80 Model I, and some related projects and files to help make it work.

The Japanese board is a rework of the original US edition, some components updated and extra jumpers added to configure the system for 50/60 Hz use, support for an extra character ROM and change of the RAM to use 4116 chips which are more readily available. The pinout for the Japanese keyboard is different. Because of this for the purposes of making the remake more useful we've added a second pin header for the connection of an original US keyboard. Note the keyboard headers have a 2.5mm pitch.

## Revisions

  * Version 1.1 Updated silkscreen including jumper tables for release.
  
## Version 1.1 Bill-of-Materials

All resistors 1/4W and capacitors 5mm pitch unless specified. Suggested substitutes might be wrong. Any feedback welcome.

|Qty|Reference(s)|Value|Type|Notes|
|:--:|:--:|:--:|:--:|:--:|
|2|R1, R32|100R|Resistor||
|1|R10|270R|Resistor||
|4|R11, R31, R34, R49|10K|Resistor||
|2|R12, R37|220R 1/2W|Resistor||
|1|R13|68 1/2W|Resistor||
|1|R14|2K7|Resistor||
|1|R15|750R|Resistor||
|1|R16|0R33 2W|Resistor||
|2|R17, R23|1K Potentiometer|Resistor||
|4|R2, R18, R19, R28|1K2|Resistor||
|1|R20|100K|Resistor||
|3|R21, R24, R25|3K3|Resistor||
|1|R22|1K5|Resistor||
|1|R26|2K2|Resistor||
|1|R27|12K|Resistor||
|1|R29|2K|Resistor||
|2|R3, R4|7K5|Resistor||
|1|R30|5R6 3W|Resistor||
|2|R33, R51|1M|Resistor||
|1|R35|680K|Resistor||
|1|R36|1.8M|Resistor||
|2|R38, R42|360K|Resistor||
|1|R39|10R|Resistor||
|17|R40, R41, R48, R54, R55, R64-R72, R74, R76, R77|4K7|Resistor||
|1|R43|560K|Resistor||
|5|R44-R47, R50|470K|Resistor||
|1|R5|220K|Resistor||
|2|R52, R53|8K2|Resistor||
|2|R56, R57|910R|Resistor||
|1|R6|75R|Resistor||
|1|R7|47R|Resistor||
|12|R8, R75, R101-R110|330R|Resistor||
|1|R9|120R|Resistor||
|2|RP1, RP2|4K7 Bussed SIP9|Resistor||
|2|C17, C18|220pF|Capacitor||
|44|C2, C8, C20, C22-C39, C41, C44-C49, C51-C59, C63-C69, C71, C72|100nF|Capacitor||
|4|C3, C7, C13, C15|10nF|Capacitor||
|1|C43|100pF|Capacitor||
|1|C60|47pF|Capacitor||
|1|C48|1nF|Capacitor||
|6|C1, C4, C6, C12, C14, C40|10uF 16V|Electrolytic Capacitor||
|1|C10|10000uF 16V|Electrolytic Capacitor||
|1|C19|100uF 16V|Electrolytic Capacitor||
|1|C5|220uF 16V|Electrolytic Capacitor||
|1|C70|22uF 16V|Electrolytic Capacitor||
|1|C9|2200uF 35V|Electrolytic Capacitor||
|3|C11, C16, C57|1nF|Film Capacitor|2.5mm|
|1|C50|2.7nF|Film Capacitor||
|1|CR1|S2V B20 Rectifier|Diode||
|1|CR2|1N4735A Zener|Diode||
|1|CR3|1N4733A Zener|Diode||
|1|CR4|1N4001|Diode||
|4|CR5, CR6, CR7, CR8|1N4148|Diode||
|1|Q1|2SC1815|Transistor||
|2|Q2, Q5|2SA1015|Transistor||
|1|Q3|2SC1499|Transistor||
|1|Q4|2SB-B531|Transistor|Suggested: MJ15016|
|1|Q6|2SB-B595|Transistor|Suggested: MJE15029|
|2|Z1, Z2|LM723|IC||
|1|Z11|74LS174|IC||
|2|Z12, Z23|74LS245|IC||
|8|Z15, Z16, Z17, Z18, Z19, Z20, Z21, Z22|4116 RAM|IC||
|4|Z24, Z30, Z59, Z66|74LS367|IC||
|1|Z25|LM3900N|IC||
|1|Z26|74LS14|IC||
|1|Z3|SN75452|IC||
|2|Z31, Z47|74LS132|IC||
|2|Z32, Z44|74LS00|IC||
|3|Z33, Z46, Z50|74LS04|IC||
|2|Z37, Z38|MCM667X|IC|Character ROM(s) 1 required|
|1|Z39|74LS153|IC||
|2|Z4, Z56|74LS175|IC||
|3|Z40, Z64, Z67|74LS32|IC||
|1|Z41|74LS30|IC||
|1|Z42|2364 ROM|IC||
|1|Z43|2332 ROM|IC||
|2|Z45, Z54|74LS02|IC||
|1|Z48|Z80 DIP40 CPU|IC||
|2|Z49, Z68|74LS244|IC||
|1|Z5|74LS10|IC||
|2|Z51, Z52|74LS08|IC||
|3|Z53, Z62, Z63|74LS74|IC||
|1|Z55|74LS20|IC||
|2|Z57, Z58|74LS166|IC||
|2|Z6, Z65|74LS92|IC||
|1|Z60|74LS11|IC||
|1|Z61|74LS139|IC||
|4|Z7, Z28, Z34, Z35|74LS93|IC||
|6|Z8, Z13, Z14, Z27, Z29, Z36|74LS157|IC||
|2|Z9, Z10|2114 RAM|IC||
|2|CN1,CN3|19 pin header|Other|19 pins used on US|
|1|CN2|9 pin header|Other||
|3|J1-J3|DIN-5 180 Degree Socket|Other||
|10|JP1-JP10|Wire Links|Other||
|1|K1|5V Relay|Other|Suggestion/PN to Follow|
|1|S1|Power Switch|Other|Suggestion/PN to Follow|
|1|S2|Reset Switch|Other|Suggestion/PN to Follow|
|1|Y1|10.6445MHz HC49U|Other||

## Notes on the Character ROM

The Japanese board has positions for two character ROMs. These are not regular ROMs.

The first, the original Motorola character ROM now almost unobtainable, on the original board is labelled with the part number 8046773. This is a masked rom programmed at the factory to the specs of Tandy, and is a variation of a stock ROM with a slightly modified character set. This ROM appears to be the same for both the Japanese and US versions of the board that we've seen.

The second character ROM we don't actually have adds a Kana character set which can be switched in and out by jumper setting, and apparently using the Japanese version of the keyboard. This would be fitted at position Z37, and isn't needed for the operation of the board.

The slightly more readily available MCM6674P character ROM can be used for either, but the character layout isn't compatible without modification by the BASIC ROM. If you need to use this we've created an adapter board (see the Extras folder) to modify the character map using an EPROM. Without it you'll end up with hieroglyphics ([see image](https://github.com/Board-Folk/TRS80IJP/blob/main/images/wrongmap.jpg)).

## Links

  [10.6445Mhz HC49U Quartz Crystal (UK)](https://www.mutant-caterpillar.co.uk/shop/product_info.php?products_id=5174)

## Credits

PCB Layout by Rob Taylor @peepouk. Schematics recreated by Ian Cudlip @grandoldian, and Chrissy @chris_jh.

## Thanks

  * The rest of the Board Folk
  * Adrian Black and friends for their test ROM which has been invaluable during testing. [TRS-80 Diagnostic ROM](https://github.com/misterblack1/trs80-diagnosticrom).

## Legal

As the product of this project is a replica of a proprietary product, the the author makes no claim of copyright to the schematics nor PCB layouts and releases these into the public domain, solely for the purposes of study and historical preservation.

You are free to produce PCBs based on this project's designs at your own risk and without limitation, for your own use or for sale and/or repair at a reasonable price. Attribution is appreciated. The authors are not obliged to provide support of any kind. 

Under no circumstances will the authors be held responsible or liable in any way for losses, damages or costs resulting from the use of the information and/or resources of this project. 

The resources are provided "as-is" without warranty of any kind, either expressed or implied, including, but not limited to, the implied warranties of merchantability and fitness for a particular purpose.