#include<stdio.h>

int main(void)
{
    double d,*p;

    p = &d;

    *p = 100.99;

    printf("%f\n",d);

    return 0;
}
