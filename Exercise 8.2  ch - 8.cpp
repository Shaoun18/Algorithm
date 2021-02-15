#include <stdio.h>
int main(void)
{
    int i;
    do {
        i = getchar();
        if(i==EOF)
            printf("Error on input.");
        break;
        if(putchar('.')==EOF)
        {
            printf("Error on output.");
            break;

        }
    } while((char) i !='\n');
    return 0;

}
