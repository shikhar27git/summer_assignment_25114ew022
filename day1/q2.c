#include<stdio.h>
int main()
{
    int n,tab,i=1;
    printf("Enetr the table no=");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        tab = n*i;
        printf("%d * %d= %d\n",n,i,tab);
    }
    return 0;
}