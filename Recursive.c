#include<stdio.h>
#include<string.h>
void recurse()
{

    int i,n;
    char name[10];
    int id[10];
    printf("\nEnter your character size:");
    scanf("%d",&name);

    printf("Enter your name : \n");
    if(i<=5)
    {
        scanf(" %c",&name[i]);
    }

    printf("Your Name : ");
    if(i<=5)
    {
        printf(" %c",&name[i]);
        i = i++;
    }

    printf("\nEnter your character size:");
    scanf("%d",&id);

    printf("Enter your id : \n");
    for(i=0;i<=5;i++)
    {
        scanf(" %d",&id[i]);
    }

    printf("Your Id : ");
    for(i=0;i<=5;i++)
    {
        printf(" %d",id[i]);
    }
    recurse();
}

int main()
{


    recurse();
    return 0;

}

