#include<stdio.h>
int main()
{
    int n,i,s=0;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        if(a[i]%2==0)
        {
        s=s+a[i];
        }
    }
    printf("%d",s);
}