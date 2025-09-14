#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    
    printf("Even numbers:\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    printf("\nodd numbers:\n");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
     return 0;
     
    
}
