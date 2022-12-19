#include<stdio.h>
int main()
{
    int n,i,s=0,a[100];
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        s=(s+a[i]);
    }  
        printf("%.2f",(float)s/n);
}