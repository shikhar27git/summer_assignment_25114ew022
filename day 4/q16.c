#include <stdio.h>
#include <math.h>
int main() 
{
    int low, up, n, temp, rem, count, sum;
    printf("Enter range: ");
    scanf("%d %d", &low, &up);
    for (n = low; n <= up; n++) 
    {
        count=0;
        temp=n;
        while (temp!=0) 
        {
            count++;
            temp /= 10;
        }
        temp = n;
        sum = 0;
        while (temp != 0) 
        {
            rem = temp % 10;
            sum += pow(rem, count);
            temp /= 10;
        }
        if (sum==n)
            printf("%d ",n);
    }
    return 0;
}