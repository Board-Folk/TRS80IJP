// trs80map.c
// v0.1
// Character Map Maker for TRS80I-Charmap Board
// @grandoldian 10/2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROMSIZE 2048

void main()
{

char rom[ROMSIZE];
char *thisrom;
FILE *fp;

int i;

// Clear down

memset(rom,0,sizeof(rom));

// ###### ROM 0 ######

thisrom=rom;

// Initial Set, First 127 1-to-1

for (i=0; i<127; i++) {
 thisrom[i]=i;
}

// ***** RE-MAPPINGS *****

// @ to Z, 0 - 31, but arrows and underscore wrong though

for (i=0; i<31; i++) {
 thisrom[i]=i+64;
}

// Arrows

thisrom[27]=94;	// Up, nearest with a carat
thisrom[28]=11;	// Down
thisrom[29]=13;	// Left
thisrom[30]=9;      // Right
thisrom[31]=95;	// Underscore

// Old Christmas Tree

thisrom[126]=12;

// Pound (Libra) sign

thisrom[96]=76;	// Use L for now, any suggestions welcome

// ###### ROM 1 ######

thisrom=&rom[128];

// Initial Set, First 127 1-to-1

for (i=0; i<127; i++) {
 thisrom[i]=i;
}

// ***** FIN *****

// Write to file

fp=fopen("out.rom","w");
fwrite(rom,sizeof(rom),1,fp);
fclose(fp);

}
