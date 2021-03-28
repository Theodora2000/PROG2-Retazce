#include <stdio.h>
#include <ctype.h>

int main() {
    int c;

    //int premenna nepretecie, char ano
    for (c = 0; c < 256; c++)
    {
        if ( isprint(c) )
            printf ("%3d %02x %c\n", c, c, c);	//raz sa chape kod ako cislo, raz ako znak
    }

    return 0;
}
