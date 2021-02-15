#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char name[10];
    int id[10];
    printf("Enter your character size:");
    scanf("%d",&name);

    printf("Enter your name : \n");
    for(i=0;i<=5;i++)
    {
        scanf(" %c",&name[i]);
    }
    printf("Your Name : ");
    for(i=0;i<=5;i++)
    {
        printf("%c",name[i]);
    }
    printf("\nEnter your character size: ");
    scanf("%d",&id);

    printf("\nEnter your id : \n");
    for(i=0;i<=7;i++)
    {
        scanf(" %d",&id[i]);
    }
    printf("Your Id : ");
    for(i=0;i<=7;i++)
    {
        printf("%d",id[i]);
    }
    return 0;

}
