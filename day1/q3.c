#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the no=");
    scanf("%d",&n);
    while(n>0)
    {
             fact = fact*n;
             n--;
    }
    printf("The factorial og given no=%d",fact);
    return 0;

}