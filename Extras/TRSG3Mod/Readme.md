# G3Mod and G3JPMod Character ROM Substitute Boards

Two versions of an updated character ROM substitute board based on the original Gendon3 Mod board that uses an 2716 or 2532 EPROM to provide the character set without an original Motorola chip. They require a soldered wire connection not provided by the character ROM socket.

Both boards allow the use of a 2716 2KByte EPROM to provide a single character set to the system, or a 2532 EPROM to provide two selectable 2KByte alternative ROM images.

Each board provides two pin connections, the first of which needs to be connected to L8 on an unmodified TRS-80 Model I for the board to work as standard. The second pin same as provided by the original Gendon3 is out of the scope of this project at this time.

Not suitable for a 2732 EPROM as the pinout's slightly different for the upper 2K. Might do other versions of these if needed, but have found the Hitachi HN462532G 2532 chips readily available new so haven't as yet.

## TRSG3Mod

The first board, G3Mod is primarily intended for use on the original US TRS-80 Model I (physical layout) and has a switch to select between the two 2K halves of the EPROM. 

Pin 1 wire connection should be to Z12 pin 11, on an original US board, and Z35 pin 11 on a Japanese board.

The BOM is simple, just a 0805 or 0402 10K resistor if you want to use the selector switch, the switch which itself, a standard single SPST 2.54mm pitch DIP, a coupling wire to the connection point and the 24 pin EPROM itself. It's nice to put it in a socket for reprogramming. To just use the first half of the 2532 without a switch put a solder blob over the 0402 position.

## TRSG3JPMod

The second board, G3JPMod is intended for use with the Japanese TRS-80 Model I, the two halves of the ROM being selected either by jumper settings on the main board, or by keyboard selection.

Pin 1 wire connection should be to Z35 pin 11.

Just requires a coupling wire to the connection point and the 24 pin EPROM itself with a socket if need be.

## ROMS

ROM images for both boards. More to follow.
