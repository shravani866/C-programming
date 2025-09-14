#include<stdio.h>
int main()
{
    int num,fact;
    printf("Enter the number:");
    scanf("%d",&num);
    fact=factorial(num);
    printf("factorial of %d is %d",num,fact);
    return 0;
}
int factorial(int x)
{
    if(x==1)
    return 1;
    else
    return x*factorial(x-1);
}
