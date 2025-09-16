#include<stdio.h>
int main()
{
    int i,n,r,num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
        
    }
    if(num==sum)
    {
        printf("%d is a Armstrong number",num);
        
    }
    else
    {
        printf("%d is not a armstrong number",num);
    }
    return 0;
    
}
