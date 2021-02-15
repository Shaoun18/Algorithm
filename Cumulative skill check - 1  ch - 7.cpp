#include<stdio.h>
#include<string.h>
int Password(int argc,char *argv)
{
    if(argc!=2)
    {
        printf("Specify a password");
    }
    if(!strcmp(argv,"password"))
    {
        printf("Access Permitted");
    }
    else
    {        printf("Access Denied");
    }
}
int main()
{
    int argc;
    char argv[20];

    scanf("%d",&argc);
    scanf("%s",&argv);

    Password(argc,argv);

    return 0;
}
