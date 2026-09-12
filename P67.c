/*. Program to find if sum of digits of a given number is palindrome or not. Use the following functions
void main();
int sum_of_digits( int );
int palindrome ( int );
Input and output should be in main function only.*/
#include<stdio.h>
int sumOfDigits(int);
int palindrome(int);
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    if(palindrome(sumOfDigits(num))){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}
int palindrome(int n){
    int org=n;
    int rev=0;
    while(n>0){
        rev=rev*10 +(n%10);
        n/=10;
    }
    return org==rev;
}
int sumOfDigits(int n){
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}