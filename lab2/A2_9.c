#include<stdio.h>
int main()
{
    int a,b,pow=1;
    printf("enter a and b: ");
    scanf("%d %d", &a, &b);
    for(int i=1; i<=b; i++)
    {
        pow *= a;
    }
    printf("%d to the power of %d is %d", a, b, pow);
    return 0;
}