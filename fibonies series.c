#include<stdio.h>
int main()
{
    int a=0,b=1,n,next,i;
    scanf("%d",&n);
    printf("%d\n",a);
    for(i=1;i<=n;i++)
    {
        next=a+b;
        a=b;
        b=next;
        printf("%d\n",next);
    }
    return 0;
}
