/*Write a program to find the factorial value of any number entered through the keyboard*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    printf("\n Factorial of %d : %d",n,fact);
    return 0;
}