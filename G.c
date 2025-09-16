#include<stdio.h>
int main()
{
    int n,i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1||i==1||i==5||j==5&&i>=3||i==3&&j>2)
               printf("*");
            else
               printf(" ");
        }
        printf("\n");
    }
    return 0;
}
