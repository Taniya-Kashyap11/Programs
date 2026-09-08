/*Write a program to find if the entered 3 digit number is Armstrong or not. Armstrong number is a number in which sum of cube of digits is equal to number, Ex: 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)*/
#include<stdio.h>
int count(int n){
    int cnt=0;
    while(n>0){
        n/=10;
        cnt++;
    }
    printf("Count %d",cnt);
    return cnt;
}
int power(int n,int pow){
     int p=1;
    for(int i=1;i<=pow;i++){
        p*=n;
    }
    printf("\n power %d is %d",n,p);
    return p;
}
int armstrong(int num,int pow){
    int org=num;
    int arm=0;
    while(num>0){
        arm=arm + power(num%10,pow);
        num/=10;
    }
    printf(" arm %d org %d",arm,org);
    if(arm==org){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    int digits=count(n);
    if(armstrong(n,digits)){
        printf("Armstrong number");
    }else{
        printf("Not armstrong");
    }
    return 0;
}