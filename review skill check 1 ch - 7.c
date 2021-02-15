#include <stdio.h>
int main(void)
{
    int num1;
    int *ptr1;

    ptr1 = &num1;

    num1 = 19;

    *ptr1 = num1;

    printf("%d\n",num1);

    return 0;
}
