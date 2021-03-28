#include <stdio.h>

int main() {
    char c;

    printf ("Zadaj riadok: ");
    do
    {
        scanf ("%c", &c);
        printf ("%c ",c);
    } while (c != '\n');
    return 0;
}
