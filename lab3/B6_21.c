// 21. Read n numbers in an array then read two different numbers, replace 1st 
//     number with 2nd number in an array and print its index and final array.

#include<stdio.h>
int main(){
    int n;
    printf("enter no. of elements :");
    scanf("%d",&n);
    int a[n];

    for(int i=0 ; i<n ; i++){
        printf("enter elements : ");
        scanf("%d",&a[i]);
    }

    int n1 , n2 , index ; 
    printf("enter n1 and n2 :");
    scanf("%d %d",&n1,&n2);

    for(int i=0 ; i<n ; i++){
        if(n1==a[i]){
            a[i]=n2;
            index=i;
            printf("\nno. is replaced at index %d\n",index);
        }
    }

    // new array after replacement 
    for(int i=0 ; i<n ; i++){
        printf("%d\n",a[i]);
    }

    return 0 ;
}