#include<stdio.h>
int main()
{
    char a[10];
    int i=0;
    while( (a[i++]=getchar()) != '\n' && i < 10) /* take input from user until it's a newline or equal to 10 */
        ;
    a[i] = '\0'; /* null-terminate the string */
    i = 0;
    while(a[i] != '\0') /* print until we've hit \0 */
        printf("%c",a[i++]);

    return 0;
}