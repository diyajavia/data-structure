#include<stdio.h>
int main()
{
    int n, fact = 1;
    printf("entre a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("factorial of %d is %d", n, fact);
}


// by recursion
#include<stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("entre a number: ");
    scanf("%d", &n);
    printf("factorial of %d is %d", n, factorial(n));
}