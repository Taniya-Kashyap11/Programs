/*Write a program to print first N terms of Fibonacci series. For example the number entered id 7 then the series should be 0, 1, 1, 2, 3, 5, 8, if the entered number is 12 then the series should be 0, 1, 1, 2, 3, 5, 8,
13, 21, 34, 55, 89.*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    int a=0,b=1,c;
    int cnt=1;
    while(cnt<=n){
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
        cnt++;
    }
    return 0;
}