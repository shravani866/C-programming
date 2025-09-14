#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    while(n!=0)
    {
        int d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("sum of the number = %d\n",sum);
    return 0;
}
