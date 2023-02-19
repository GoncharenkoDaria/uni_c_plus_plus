//
// Created by daria on 19.02.2023.
//
#include "stdio.h"
int main()
{
    float a,b,c,d,x; int f1,f2;
    a=10; b=20; c=50; d=90;
    x=67;
    f1=x>=a && x<=b;
    printf ("%d",f1);
    f2=x>=c && x<=d;
    f1 = f1||f2;
    printf ("%d",f1);
    scanf_s ("%f",&a);
}