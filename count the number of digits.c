#include<stdio.h>
int main()
{
    int n,i,count_digits=0,sum=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    while(n!=0)
    {
        int d=n%10;
        sum=sum+d;
        n=n/10;
        count_digits++;
    }
    printf("number of digits = %d\n",count_digits);
    return 0;
}
