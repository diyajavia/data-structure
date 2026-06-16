#include<stdio.h>
int main()
{
    int a,b,i=1;
    printf("Enter range to find prime numbers between them: ");
    scanf("%d %d",&a,&b);
    int flag=1;
    for ( i = a; i <= b; i++)
    {
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}