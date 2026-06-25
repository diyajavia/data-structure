// 17. Write a program to calculate sum of numbers from m to n.

#include<stdio.h>
int main()
{
    int m , n ;
    printf("enter m and n :");
    scanf("%d %d",&m,&n);

    int sum = 0 ;
    
    if(m>n){
        int temp=m;
        m=n;
        n=temp;
    }

    for(int i=m ; i<=n ; i++){
        sum=sum+i;
    }

    printf("sum = %d",sum);

    return 0;
}