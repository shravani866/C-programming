#include<stdio.h>
int main()
{
    int n,i;
    long long fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    
    if(n<0)
    {
        printf("factorial of negative numbers doesnot exist");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact*=i;
        }
        printf("factorial of %d = %lld\n",n,fact);
    }
    return 0;
}
