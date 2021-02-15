#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;

    printf("Enter the marks in five subject ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    per = (m1+m2+m3+m4+m5)/500*100;

    if (per >= 60)
    {
        printf("First divison\n");
    }
    else
    {
        if((per >= 50)&& (per<60))
        {
            printf("Second divison\n");
        }
        if((per >= 40)&&(per<50))
        {
           printf("Third divison\n");
        }
        else(per<40);
        {
            printf("fail\n");
        }
    }
}
