/*Write a program to print out all Armstrong numbers between 100 and entered number( Only 3 digit
number to be input). For example if entered number is 500 then the program should find all Armstrong
numbers between 1 and 500*/
#include<stdio.h>
int count(int n){
    int cnt=0;
    while(n>0){
        n/=10;
        cnt++;
    }
    return cnt;
}
int power(int n,int pow){
     int p=1;
    for(int i=1;i<=pow;i++){
        p*=n;
    }
    return p;
}
int armstrong(int num,int pow){
    int org=num;
    int arm=0;
    while(num>0){
        arm=arm + power(num%10,pow);
        num/=10;
    }
    if(arm==org){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter number between 100 to 500");
    scanf("%d",&n);
    int digits=3;
    for(int i=100;i<=n;i++){
         if(armstrong(i,digits)){
        printf("\nArmstrong number %d",i);
    }
    }
   
    return 0;
}