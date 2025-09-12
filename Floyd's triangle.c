#include<stdio.h>
int main()
{
    int number=1,i,j,rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Floyd's triangle:\n");
    
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
    return 0;
    
}
