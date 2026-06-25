// 19. Write a program to find position of the smallest number & the largest number from given n numbers.

#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of elements :");
    scanf("%d",&n);
    int a[n];

    for(int i=0 ; i<n ; i++){
        printf("enter elements : ");
        scanf("%d",&a[i]);
    }

    int max=a[0] , min=a[0] , temp1=0 , temp2=0 ; // temp1 is for max index and 2 is for min index.

    for(int i=1 ; i<n ; i++){
        if(max < a[i]){
            max=a[i];
            temp1=i;
        }else{}

        if(min > a[i]){
            min=a[i];
            temp2=i;
        }else{}
    }

    printf("max = %d   min = %d",max,min);
    printf("\nmax is at index = %d",temp1);
    printf("\nmin is at index = %d",temp2);

    return 0;
}