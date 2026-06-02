#include<stdio.h>
int main()
{
    int n,low,up,i,j,sum=0,count=0;
    printf("Emter the lower and upper range=");
    scanf("%d %d",&low,&up);
    printf("The prime no in %d and %d are:\n",low,up);
    for(i=low;i<=up;i++)
    {
        count=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
                count++;
            
        }
         if(count==0 && i>1)
            {
                printf("%d\n",i);
            }

    }
    return 0;
}
