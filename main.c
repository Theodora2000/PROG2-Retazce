#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

int strCompare(char* str1, char* str2)
{
    int index=0;
    while(1>0)
    {
        if(str1[index]=='\0' && str2[index]=='\0')
        {
            return 0;
        }
        if(str1[index]!='\0' && str2[index]=='\0')
        {
            return 1;
        }
        if(str1[index]=='\0' && str2[index]!='\0')
        {
            return -1;
        }

        if(str1[index]<str2[index]){
            return -1;
        }
        if(str1[index]>str2[index]){
            return 1;
        }
        index++;

    }
}

void Upisuj(char* string)
{
    int i;
    char c;
    for( i=0;i<MAX;i++)
    {
        c = (char)getchar();
        if(c=='\n')
        {

            break;
        }
        fflush(stdin);
        string[i]=c;
    }
    string[i]='\0';

}

int main () {

    char string[MAX+1];
    int niz[10];
    //Upisuj(string);

    printf("%s", string);
    char string1[]="otec";
    char string2[]="oted";
    printf("%d",strCompare(string1,string2));
    return 0;
}