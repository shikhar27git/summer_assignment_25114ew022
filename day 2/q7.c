#include<stdio.h>
int main()
{
    int pro=1,rem,n;
    printf("Enetr the no=");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        pro=pro*rem;
        n=n/10;

    }
    printf("The product of no=%d",pro);
    return 0;
}