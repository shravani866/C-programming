#include<stdio.h>
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    f*=i;
    return f;
    
}
int main()
{
    int n,d,sum=0,copy_n,num;
    scanf("%d",&n);
    copy_n=n;
    while(n!=0)
    {
        d=n%10;
        sum+=fact(d);
        n=n/10;
    }
    if(copy_n==sum)
    {
        printf("it is strong number");
    }
    else
    {
        printf("it is not a strong number");
    }
    return 0;
}
