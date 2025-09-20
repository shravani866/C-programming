#include<stdio.h>
int main()
{
    long num=2357800;
    int even =0,odd=0,zero=0;
    int digit;
    while(num>0)
    {
        digit = num%10;
        if(digit==0)
        {
            zero++;
            
        }
        else if(digit%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        num=num/10;
    }
    printf("Even digits:%d\n",even);
    printf("Odd digits:%d\n",odd);
    printf("Zeros:%d\n",zero);
    return 0;
}
