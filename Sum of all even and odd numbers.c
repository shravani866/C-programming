#include<stdio.h>
int main()
{
    int sum_even=0,sum_odd=0,n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    
    printf("even numbers:\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            sum_even+=i;
        }
    }
    printf("\nsum of even numbers=%d\n",sum_even);
    printf("\nodd numbers:\n");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            sum_odd+=i;
        }
    }
    
    printf("\nSum of odd numbers=%d\n",sum_odd);
    return 0;
    
    
}
