/*If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and
last digit of this number*/
#include<stdio.h>
int main(){

    int n;
    printf("ENter number");
    scanf("%d",&n);
    int sum=(n%10)+((n/1000)%10);
    printf("Sum : %d",sum);
    return 0;
}