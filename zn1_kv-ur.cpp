//
// Created by daria on 19.02.2023.
//
/*#include "cstdio"
#include "cmath"
int main()
{
    float a,b,c,s,p,k;
    a=3; b=6; c=4;
    p=a+b+c;
    p=p/2;
    s=p*(p-a)*(p-b)*(p-c);
    s= sqrt(s);
    printf("s=%f",s);
    scanf_s ("%d",&k);

}*/
#include "cstdio"
#include "cmath"
int main()
{
    float a,b,c,d,x1,x2,k;
    printf("input coeffs \n");
    scanf ("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("results \n x1=%f x2=%f",x1,x2);
    scanf ("%f",&k);

}

