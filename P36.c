/*Write a program to convert decimal number to its octal equivalent.*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter decimal number");
    scanf("%d",&n);
    int ans=0;
    int rev=1;
    while(n!=0){
        int bit=n%8;
        ans=(rev*bit)+ans;
        rev*=10;
        n/=8;
    }
    printf("Octal conversion : %d",ans);
    return 0;
}