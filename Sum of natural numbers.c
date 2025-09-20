#include<stdio.h>
int SumofNaturalNumbers(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+SumofNaturalNumbers(n-1);
    }
}
int main()
{
    int num;
    printf("Enter a positive integer:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("please enter a non-negative integer.\n");
    }
    else
    {
        int result=SumofNaturalNumbers(num);
        printf("sum of natural number up to %d is:%d\n",num,result);
    }
    return 0;
}
