/*A positive integer is entered through the keyboard, write a function to calculate sum of digits of the number using recursion.*/
#include<stdio.h>
int sum(int);
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    printf("Sum of digits : %d",sum(num));
    return 0;
}
int sum(int n){
    if(n==0){
        return 0;
    }
    return  (n%10)+ sum(n/10);
}