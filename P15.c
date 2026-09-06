/* A four-digit number is entered through the keyboard. Write a program to obtain the reversed number
and to determine whether the original and reversed numbers are equal or not. Such a number is also
called palindrome number for example Reverse of 1221 is 1221*/
#include<stdio.h>
int main(){

    int org,n,rev=0;
    printf("Enter the number ");
    scanf("%d",&org);
    n=org;
    rev=((n%10)*1000)+(((n/10)%10)*100)+(((n/100)%10)*10)+(((n/1000)));
    if(rev==org){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }
    return 0;
}