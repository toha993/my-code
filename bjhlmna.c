#include<stdio.h>
#include <math.h>
#define pi 3.14159265
int main()
{
    int t;
    scanf("%d",&t);
    double v,k1,k2,x,y,ang;
    while(t--)
    {
        scanf("%lf%lf%lf",&v,&k1,&k2);
        ang=(pi-atan(4*k1/k2))/2;
        x=v*v*sin(ang)*sin(ang)/20;
        y=v*v*sin(2*ang)/10;
        printf("%.3lf %.3lf\n",ang,k1*y+k2*x);
    }
    return 0;
}