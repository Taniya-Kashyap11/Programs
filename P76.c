/* Write a recursive function to obtain the running sum of first N natural numbers.*/
#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter the number of natural numbers");
    scanf("%d",&n);
    printf("Sum of first N natural number : %d",sum(n));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+ sum(n-1);
}
