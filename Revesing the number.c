#include<stdio.h>
int main()
{
    int n,i,rev=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    while(n!=0)
    {
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("Reversed number = %d\n",rev);
    return 0;
}
