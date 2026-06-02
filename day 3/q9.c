#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the no=");
    scanf("%d",&n);
    if(n==2){
        printf("Prime");
    }
    if(n<=1){
        printf("not prime");
    }
   for(i=1;i<=n/2;i++)
   {
        n=n/i;
        sum=sum+1;
   }
    if(sum==2){
        printf("Prime no");
    }
    else{
        printf("Not prime");
    
    }
    return 0;
}