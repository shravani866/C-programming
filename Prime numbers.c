#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("its a prime number");
    else
    printf("not a prime number");
    return 0;
}
