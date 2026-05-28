#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the no for sum=");
    scanf("%d",&n);
    while(n>0)
     {
        sum=sum+n;
        n--;
     }
     printf("the sum is=%d",sum);
     return 0;
}