#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

int findChar(char* recenica, char c)
{
    char* setaj;
    setaj=recenica;
    int i=0;
    while(*setaj!='\0')
    {
        if(*setaj==c)
        {

            return i;
        }
        setaj++;
        i++;
    }
    return  -1;
}

int main () {

    char* string = malloc(sizeof(char)*6);
    strcpy(string,"*-*-*\0");
    int poz;

    while((poz=findChar(string,'*'))!=-1)
    {

        int staro=strlen(string);
        string=realloc(string,strlen(string)+2);
        for(int i=staro-1; i>=poz; i--)
        {
            string[i+2]=string[i];
        }
        string[poz]='A';
        string[poz+1]='B';
        string[poz+2]='C';
        string[staro+2]='\0';
    }
    printf("%s",string);

    return 0;
}