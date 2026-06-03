#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,temp,rem,count=0;
    printf("Enter the no=");
    scanf("%d",&n);
    temp=n;
    int original=n;
    while(n>0)
    {
        rem=n%10;
        count++;
        n=n/10;
    }
    while(temp!=0)
    {
        rem=temp%10;
        sum += pow(rem, count);
        temp=temp/10;
    }
    if(original==sum)
    {
        printf("The no is armstrong");

    }
    else{
        printf("THe no is not armstrong");

    }
    return 0;
}