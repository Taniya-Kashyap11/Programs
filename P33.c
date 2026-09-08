/*Write a program to print all prime numbers from 2 the number entered by user. For example if entered
number is 100 then the program should find all prime numbers between 1 and 100.*/
#include<stdio.h>
int isPrime(int);
int main(){
       int n;   
    printf("Enter number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            printf("\nPrime %d",i);
        }
    }
    return 0;
}
int isPrime(int n){
 
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/i;i++){ // mathematically equals to Root of n
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}