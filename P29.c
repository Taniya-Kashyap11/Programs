/*Two numbers are entered through the keyboard. Write a program to find the value of one number
raised to the power of another.*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter numbers :");
    scanf("%d%d",&a,&b);
    int pow=1;
    for(int i=1;i<=b;i++){
        pow*=a;
    }
    printf("%d raised to power %d is %d",a,b,pow);
    return 0;
}