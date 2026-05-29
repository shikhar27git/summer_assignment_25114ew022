#include<stdio.h>
int main()
{
    int n,sum=0,res;
    printf("Enter the no =");
    scanf("%d",&n);
    while(n>0)
    {
        res=n%10;
        sum=sum+res;
        n=n/10;

    }
    printf("The sum of no is=%d",sum);
    return 0;
} 