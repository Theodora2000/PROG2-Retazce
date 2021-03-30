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

int* findNum(int* niz,int n,int br)
{
    int i=0;
    int* setaj;
    setaj=niz;
    while(i<n)
    {
        if(*setaj==br)
        {
            return setaj;
        }
        setaj++;
        i++;
    }
    return  NULL;

}

char* findChar(char* recenica, char c)
{
    char* setaj;
    setaj=recenica;
    int i=0;
    while(*setaj!='\0')
    {
        if(*setaj==c)
        {

            return setaj;
        }
        setaj++;
    }
    return  NULL;
}
char* findCharLast(char* recenica, char c)
{
    char* setaj;
    setaj=recenica;
    char* returnVal;
    returnVal=NULL;
    int i=0;
    while(*setaj!='\0')
    {
        if(*setaj==c)
        {
            returnVal=setaj;
        }
        setaj++;
    }
    return  returnVal;
}

int main () {

    char c='a';
    char string[]="anabela";

    for(int i=0;i<strlen(string);i++){
        if(string[i]==c){
            printf("%d ",i);
        }
    }
    return 0;
}