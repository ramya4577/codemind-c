#include<stdio.h>
int main()
{
    int n,num,tem,rev=0;
    scanf("%d",&n);
    while(n)
    {
        rev=0;
        scanf("%d",&num);
        tem=num;
        while(tem)
        {
            rev=(rev*10)+tem%10;
            tem/=10;
        }
        if (rev==num)
        printf("True
");
        else
        printf("False
");
        n--;
    }
}