# G3Mod and G3JPMod Character ROM Substitute Boards

Two versions of an updated character ROM substitute board based on the original Gendon3 Mod board that uses an 2716 or 2532 EPROM to provide the character set without an original Motorola chip. They require a soldered wire connection not provided by the character ROM socket.

Both boards allow the use of a 2716 2KByte EPROM to provide a single character set to the system, or a 2532 EPROM to provide two selectable 2KByte alternative ROM images.

Each board provides two pin connections, the first of which needs to be connected to L8 on an unmodified TRS-80 Model I for the board to work as standard. The second pin same as provided by the original Gendon3 is out of the scope of this project at this time.

## TRSG3Mod

The first board, G3Mod is primarily intended for use on the original US TRS-80 Model I and has a switch to select between the two 2K halves of the EPROM.

Pin 1 wire connection should be to Z12 pin 11, on an original US board, and Z35 pin 11 on a Japanese board.

## TRSG3JPMod

The second board, G3JPMod is intended for use with the Japanese TRS-80 Model I, the two halves of the ROM being selected either by jumper settings on the main board, or by keyboard selection.

Pin 1 wire connection should be to Z35 pin 11.

## ROMS

ROM images for both boards. More to follow.
