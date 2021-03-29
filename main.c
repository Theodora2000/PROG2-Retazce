#include<stdio.h>
#include <string.h>
int main()
{
    char str1[] = "home";
    char str2[] = "sweet";
    if(strcmp(str1,str2)>0){
        return 1;

    } else if(strcmp(str1,str2)<0){
        return -1;
    }else{
        return 0;
    }
}