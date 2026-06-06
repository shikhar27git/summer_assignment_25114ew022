#include<stdio.h>
int main()
{
    int n,pow,num=1;
    printf("Enter the no and power=");
    scanf("%d %d",&n,&pow);
    for(int i=1;i<=pow;i++)
    {
         num=num*n;
    }
    printf("The ans is=%d",num);
    return 0;
}