/*Any integer is input through the keyboard. Write a program to find out whether it is an odd number or
even number*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%2){
        printf("Odd number");
    }else{
        printf("Even number");
    }
    return 0;
}