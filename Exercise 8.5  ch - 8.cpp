#include<stdio.h>
int main()
{
    unsigned long i;
    for(i=2;i<=100;i++)
    {
        printf("%-10lu %-10lu %-10lu\n",i,i*i,i*i);
    }
}
