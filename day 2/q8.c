#include<stdio.h>
int main()
{
    int n,rev=0,rem,tem;
    printf("Enter the no=");
    scanf("%d",&n);
    tem=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(tem==rev){
        printf("palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}