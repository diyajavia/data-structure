// 24. Write a program to insert a number at a given location in an array.

#include<stdio.h>

int main(){
    int n;
    printf("enter no. of elements :");
    scanf("%d",&n);
    int a[n];

    for(int i=0 ; i<n-1 ; i++){
        printf("enter elements : ");
        scanf("%d",&a[i]);
    }

    int pos , value ;
    printf("enter position and value to insert at it : ");
    scanf("%d %d",&pos,&value);

    for(int i=n-1 ; i>=pos ; i--){
        a[i] = a[i-1] ; 
    }
    a[pos-1] = value ; 

    printf("New array after insertion. ");
    for(int i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }

    return 0;

}