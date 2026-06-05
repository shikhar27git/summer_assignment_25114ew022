#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enetr the no=");
    scanf("%d",&n);
    printf("The factors of %d are=\n",n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}