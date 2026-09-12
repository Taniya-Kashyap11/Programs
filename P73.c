/* A positive integer is entered though the keyboard, write a program to obtain factors of the number.Modify the function to obtain the prime factors recursively.*/
#include<stdio.h>
int factors(int,int);
int main(){
    int n;
    printf("ENter the number");
    scanf("%d",&n);
    factors(n,2);
    return 0;
}
int factors(int n,int div){
    if(n==1){
        return 1;
    }
    if(n%div==0){
        printf("%d\t",div);
        factors(n/div,div);
    }else{
        factors(n,div+1);
    }
}