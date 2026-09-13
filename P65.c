/*A positive integer is entered through the keyboard, write a function to calculate sum of digits of the
number.*/
#include<stdio.h>
int sumOfDigits(int);
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    printf("Sum of digits is %d",sumOfDigits(num));
    return 0;
}
int sumOfDigits(int n){ // sum of digits
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}