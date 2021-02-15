#include<stdio.h>

int mystrlen(char *p);

int main(void)
{
    char str[80];

    printf("Enter a string : ");
    gets(str);

    printf("Length is &d", mystrlen(str));

    return 0;
}

int mystrlen(char *p)
{
    int i;

    i =0;
    while(*p)
    {
       i++;
       p++;
    }
    return i;
}
