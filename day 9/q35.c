#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    for(ch='A' ; ch<='E' ; ch++)
    {
        for (j='A' ; j<=ch ; j++)
        {
            printf("%c",ch);
        }
        printf("\n");


    }
        return 0;
    
}