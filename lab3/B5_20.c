// 20. Write a program to find whether the array contains a duplicate number or not. 

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

    int temp , duplicate=0 ;
    
    for(int i=0 ; i<n ; i++){
        temp=a[i];
        for(int j=i+1 ; j<n ; j++){
            if(temp==a[j]){
                duplicate++;
                printf("\nduplicate no in array is : %d",a[i]);
            }
        }
    }

    printf("\ntotal duplicate no. in array are : %d",duplicate);

    return 0 ;
}