/* Write a program to print Fibonacci series till any entered number. For example the number entered id 50 then the series should be 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, if the entered number is 200 then the series should be 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144.*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    printf("Fibonacci Series :");
    while(a<=n){
      
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c; 
    }
    return 0;
}