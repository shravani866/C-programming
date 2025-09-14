/*#include <stdio.h>

int main()
{
   int rows,cof=1,space,i,j;
   printf("Enter the number of rows:");
   scanf("%d",&rows);
   
   for(i=0;i<rows;i++)
   {
       for(space=1;space<=rows-i;space++)
       printf("  ");
       
       for(j=0;j<=i;j++)
       {
           if(j==0||i==0)
           {
               cof=1;
           }
           else
           {
               cof=cof*(i-j+1)/j;
               
           }
           printf("%4d",cof);
           
       }
       printf("\n");
   }

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    
    printf("Even numbers:\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    printf("\nodd numbers:\n");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
     return 0;
     
    
}*/
/*#include<stdio.h>
int main()
{
    int sum_even=0,sum_odd=0,n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    
    printf("even numbers:\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            sum_even+=i;
        }
    }
    printf("\nsum of even numbers=%d\n",sum_even);
    printf("\nodd numbers:\n");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            sum_odd+=i;
        }
    }
    
    printf("\nSum of odd numbers=%d\n",sum_odd);
    return 0;
    
    
}*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%5==0)
        {
            printf("%d\n",i);
        }
    }
}
/*#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=0;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
    
}*/