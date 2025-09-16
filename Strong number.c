#include<stdio.h>
int main()
{
    int n,num,d,res=0,fact=1,i;
    printf("Enter n:");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        d=num%10;
        int fact=1;
        for(i=1;i<=d;i++)
        {
            fact=fact*i;
        }
        res=res+fact;
        num=num/10;
    }
    printf("res=%d\n",res);
    if(res==n)
    {
        printf("strong number");
    }
    else
    {
        printf("not a strong number");
    }
    
    return 0;
    
    
}
