/* Write a program to find the range of a set of numbers entered by user. Range is the difference between
the smallest and largest number in the list. The user should be able to enter multiple numbers as per
choice. Use do-while loop.*/
#include<stdio.h>
#include <limits.h>
int main(){
    char choice;
    int n;
    int min=INT_MAX;
    int max=INT_MIN;
    do{
        printf("Enter number :");
        scanf("%d",&n);
       
        if(n<min){
            min=n;
        }
        if(n>max){
            max=n;
        }
         printf("Do you want to enter another number :");
        scanf(" %c",&choice);
    }while(choice=='Y' || choice=='y');
    printf("Range differnce : %d",max-min);
    return 0;
}