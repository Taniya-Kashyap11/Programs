/*Write a program to convert decimal number to its binary equivalent.*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the decimal number");
    scanf("%d",&n);
  int  ans=0;
   int rev=1;
    while(n!=0){
        int bit=n%2;
        ans=(bit*rev)+ans;
        n/=2;
        rev*=10;
    }
    printf("Binary number : %d",ans);
    return 0;
}