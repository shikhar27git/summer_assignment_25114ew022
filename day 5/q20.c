#include<stdio.h>
int main()
{
    int n,fact,largest=0;
    printf("Enter the no=");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
       if(n%i==0)
       {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count ++;
            }

        }
        if(count==2)
        {
            largest=i;
        }
       }

            
        
    }
    printf("Largest prime facotr=%d\n",largest);
    return 0;
}    