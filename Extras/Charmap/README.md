# TRS-80 Model I Character Map Adapter Board

![Board with an EEPROM, MCM6674P Character ROM and a single position switch](https://github.com/Board-Folk/TRS80IJP/blob/main/images/charmapboard.jpg)

The original masked TRS-80 character ROM is now difficult to obtain. This is a simple adapter board to allow the use of the more readily available MCM6674P character ROM with the TRS-80 Model I BASIC ROM, possibly others too with the right map. It uses a standard 24 pin EEPROM/EPROM to map the original address lines coming in to alternatives compatible with your available character ROM to create the correct video output. Without it BASIC will give you garbage ([see image](https://github.com/Board-Folk/TRS80IJP/blob/main/images/wrongmap.jpg)).

The character ROM itself is a 7 bit ROM giving 128 characters. The character map a simple byte array providing the location of the alternative character of the replacement character in the substitute ROM used for each position.

The map board incorporates a single two position switch to allow the EPROM to be programmed with two alternative maps - two lots of 128 bytes which are positioned at the start of the EPROM.

The Kicad project for the board is in the Kicad folder with the zip file TRS80I-Charmap-Gerberv1.zip being the Gerber of this project. The file out.rom is my interpretation of how the MCM6674P should be represented to BASIC and this was generated using the C code trs80map.c. Please feel free to make your own maps. :-)

I've used an Atmel 28C16 as it's easy to re-flash.

## Credits

By Ian Cudlip @grandoldian November 2022.