/* Write a function to calculate the factorial value of any integer entered through the keyboard.
*/
#include<stdio.h>
int factorial (int);
int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    printf("Factorial : %d",factorial(n));
    return 0;
}
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}