#include<stdio.h>
#include<math.h>
int main()
{
    printf("%lf",hypot(2.33,7.44));
    return 0;
}
double hypot(double s1,double s2)
{
    double h;

    h= (s1*s1)+(s2*s2);

    return sqrt(h);
}
