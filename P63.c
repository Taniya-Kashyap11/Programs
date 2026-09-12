/*Write a function power(a, b), to calculate the value of a raised to b.*/
#include<stdio.h>
int power(int ,int );
int main(){
    int a,b;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    printf("%d^%d = %d",a,b,power(a,b));

    return 0;
}
int power(int a,int b){
    int pro=1;
    for(int i=1;i<=b;i++){
        pro*=a;
    }
    return pro;
}