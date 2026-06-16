//  WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ …+(1+2+3+4+….+n).

#include<stdio.h>
int main()
{
    int n, sum=0, temp=0;
    printf("enter the value of n : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        temp=temp+i;
        sum=sum+temp;
    }
    
    printf("the sum = %d",sum);
    
    return 0;
}