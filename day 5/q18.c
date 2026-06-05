#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,i,rev,fact,temp;
    printf("Enetr te no=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rev=n%10;
        fact=1;
        for(i=1;i<=rev;i++)
        {
            fact=fact*i;
           
        }
         sum+=fact;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Strong no");

    }
    else
    {
        printf("Not a strong no");

    }
    return 0;
}
