#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

void new_string(char* in, int n, char* out)
{
    int i;
    for( i=0;i<n-1;i++)
    {

        out[i]=in[rand() % n];
    }
    out[i]='\0';

}


int main () {

    char * in="programiranje";
    char* out[N];
    new_string(in,N,out);
    printf("%s", out);

    return 0;
}