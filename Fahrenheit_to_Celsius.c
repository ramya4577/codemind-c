#include<stdio.h>
int main()
{
    float Fahrenhiet,Celsius;
    scanf("%f",&Fahrenhiet);
    Celsius=((Fahrenhiet-32)*5)/9;
    printf("%.2f",Celsius);
}