#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the no=");
    scanf("%d",&n);
    while(n>0){
        
        sum=sum+1;
        n=n/10;
    }
    printf("The no of digits are=%d",sum);
    return 0;
}