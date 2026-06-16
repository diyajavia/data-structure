#include<stdio.h>
int main()
{
    int a, i=1;
    printf("enter a number: ");
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        if(a % i == 0)
            printf("%d ", i);
    }
    printf("are the factors of %d", a);
    return 0;
}