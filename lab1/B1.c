#include<stdio.h>
int main()
{
    int sec;
    printf("Enter time in seconds: ");
    scanf("%d",&sec);   
    int hr=sec/3600;
    int min=(sec%3600)/60;  
    int s=(sec%3600)%60;
    printf("%d seconds is equal to %d hours, %d minutes and %d seconds",sec,hr,min,s);
    return 0; 
    
}