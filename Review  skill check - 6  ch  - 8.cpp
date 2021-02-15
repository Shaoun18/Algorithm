#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("There were %d arguments.\n", argc);
    printf("The last one is %s", argv[argc-1]);

    return 0;
}
