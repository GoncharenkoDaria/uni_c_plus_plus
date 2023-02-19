//
// Created by daria on 19.02.2023.
//
#include "cstdio"
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

}

