#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter the no=");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        {
           rem=n%i;
           if(rem==0)
           {
            sum=sum+i;
           }
        }
        if(sum==n)
        {
            printf(" perfect");
        }
        else
        {
            printf("not perfect");
        }
    return 0;
   
}