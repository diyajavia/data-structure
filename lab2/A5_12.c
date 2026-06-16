#include<stdio.h>
int main()
{
    int a ,count=0;
    printf("enter a number: ");
    scanf("%d", &a);    
    for(int i=2; i<a; i++)
    {
        if(a % i == 0)
            count++;
    }
    if(count == 0)
        printf("%d is a prime number", a);
    else
        printf("%d is not a prime number", a);
    return 0;
}


// other method
#include<stdio.h>
int main()  
{
    int a, count=0;
    printf("enter a number: ");
    scanf("%d", &a);
    int flag = 1; // assume a is prime
    for(int i=2; i<=a/2; i++)
    {
        if(a % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("%d is a prime number", a);
    else
        printf("%d is not a prime number", a);
    return 0;
}