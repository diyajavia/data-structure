#include<stdio.h>
int main()
{
    int a, rev=0, rem;
    printf("enter a number: ");
    scanf("%d", &a);
    int temp = a;
    while(temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    printf("reverse of %d is %d", a, rev);
    return 0;
}