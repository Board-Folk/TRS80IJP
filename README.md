# TRS80IJP

A remake of the TRS-80 Model I Japanese edition motherboard.

*More updates to follow*

![Build Board in Green](https://github.com/Board-Folk/TRS80IJP/blob/main/images/builtboardv1.0_small.jpg)

This reposistory contains the BOM and gerbers for a remake of the TEC, Japanese version of the TRS-80 Model I, and some related projects and files to help make it work. The BOM currently is just the iBOM generated from Kicad.

The Japanese board is a rework of the original US edition, some components updated and extra jumpers added to configure the system for 50/60 Hz use, support for an extra character ROM and change of the RAM to use 4116 chips which are more readily available. The keyboard pinout and matrix for the Japanese keyboard is different. Because of this for the purposes of making the remake more useful we've added a second pin header for the connection of an original US keyboard.

## Notes on the Character ROM

The Japanese board has positions for two character ROMs.

The first, the original Motorola character ROM now almost unobtainable, on the original board is labelled with the part number 8046773. This is a masked rom programmed at the factory to the specs of Tandy, and is a variation of a stock ROM with a slightly modified character set. This ROM appears to be the same for both the Japanese and US versions of the board that we've seen.

The second character ROM we don't actually have adds a Kana character set which can be switched in and out by jumper setting, and apparently using the Japanese version of the keyboard. This would be fitted at position Z37, and isn't needed for the operation of the board.

The slightly more readily available MCM6674P character ROM can be used, but the character layout isn't compatible without modification by the BASIC ROM. If you need to use this we've created an adapter board (see the Extras folder) to modify the character map using an EPROM. Without it you'll end up with hieroglyphics ([see image](https://github.com/Board-Folk/TRS80IJP/blob/main/images/wrongmap.jpg)).

## Revisions

  * Version 1.0 initial test release.
  * Version 1.1 Updated silkscreen including jumper tables for release.

## Links

  [10.6445Mhz HC49U Quartz Crystal (UK)](https://www.mutant-caterpillar.co.uk/shop/product_info.php?products_id=5174)

## Credits

PCB Layout by Rob Taylor @peepouk. Schematics recreated by Ian Cudlip @grandoldian, and Chrissy @chris_jh.

## Thanks

  * The rest of the Board Folk
  * Adrian Black and friends for their test ROM which has been invaluable during testing. [TRS-80 Diagnostic ROM](https://github.com/misterblack1/trs80-diagnosticrom).
