#include<stdio.h>
int main()
{
    int days;
    printf("Enter the number of days: ");   
    scanf("%d",&days);
    int years=days/365;
    int months=(days%365)/30;
    int d=(days%365)%30;
    printf("%d days is equal to %d years, %d months and %d days",days,years,months,d);
    return 0;
    
}