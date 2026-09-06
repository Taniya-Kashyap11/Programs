/*Find the absolute value of a number entered through the keyboard.
Hint: Absolute value of any negative number id is positive value for example absolute(-5) = 5 and
absolute(5) =5*/
#include<stdio.h>
int main(){

    int n;
    printf("Enter number");
    scanf("%d",&n);
    if(n<0){
        n=-(n);
    }
    printf("Absolute value %d",n);
    return 0;
}