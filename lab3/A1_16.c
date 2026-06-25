// 16. Write a program to read and display n numbers using an array.

#include<stdio.h>
int main(){
    int n;
    printf("enter size of array n= ");
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
        printf("enter the element ");
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}