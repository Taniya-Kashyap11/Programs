/*Write a program to find if the entered number is prime or not.
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    if(n<=1){
        printf("Non prime");
        return 0;
    }
    int flag=0;
    for(int i=2;i<=n/i;i++){ // mathematically equals to Root of n
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("Non Prime");
    }else{
        printf("prime");
    }
    return 0;

}