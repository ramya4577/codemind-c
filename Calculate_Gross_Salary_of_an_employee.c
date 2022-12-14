#include<stdio.h>
int main()
{
    float b,d,h;
    scanf("%f%f%f",&b,&d,&h);
    float pf=(b)*0.12;
    float gs=b+d+h+pf;
    printf("%.2f
%.2f",pf,gs);
}