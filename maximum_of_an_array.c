#include<stdio.h>
int main()
{
    int n,i;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<=n-1;i++)
    {
        if (max<a[i])
     {
         max=a[i];
     }   
    }
    printf("%d",max);
}