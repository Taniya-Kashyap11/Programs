/*Write a program to print first N prime numbers. For example if entered number is 5 then the program
should print first 5 prime numbers as 2, 3, 5, 7, 11.
*/
#include<stdio.h>
int isPrime(int);
int main(){
       int n;   
    printf("Enter number :");
    scanf("%d",&n);
    for(int i=1;i<=100;i++){
        if(n==0){
            return 0;
        }
        if(isPrime(i)){
            printf("\nPrime %d",i);
            n--;
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

