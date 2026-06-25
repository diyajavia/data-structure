// 18. Write a program to calculate average of first n numbers. 

#include<stdio.h>
int main()
{
    int n , sum=0 ;
    float avg ;

    printf("enter n till you want to find sum : ");
    scanf("%d",&n);

    for(int i=1; i<=n ; i++){
        sum=sum+i;
    }

    avg = sum/(float)n ;

    printf("sum = %d",sum);
    printf("average of 1st n numbers is : %f",avg);

    return 0;

}