/*Write a program to find is a given number is palindrome or not*/
#include<stdio.h>
int main(){
    int n,rev=0,rem;
    printf("Enter number");
    scanf("%d",&n);
    int org=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(org==rev){
        printf("Palindrome number");
    }else{
        printf("Not palindrome");
    }
    return 0;
}