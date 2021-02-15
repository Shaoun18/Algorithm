#include<stdio.h>
void avg(double *d,int num)
{
    int temp=num-1;
    double sum;
    for(sum=0;temp>=0;temp--)
        sum=sum+d[temp];

    printf("Average is %f", sum /(double)num);
}
int main()
{
    double nums[]={2.33,5.44,4.34,7.32,8.55,3.33,43.43,2.33,48.00,76.00,87.99};

    avg(nums,10);

    return 0;
}
