#include<stdio.h>
int main()
{
    int n,hr,min,sec;
    scanf("%d",&n);
    hr=n/3600;
    min=(n%3600)/60;
    sec=(n%3600)%60;
    printf("H:M:S-%d:%d:%d",hr,min,sec);
}