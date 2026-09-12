/* Write a program to find out first N Armstrong numbers (Don’t use any inbuilt power() function).
Armstrong number is a number whose each digit when is raised to power the number of digits in that
number and then added is equal to the number.
153 = 1
3 + 53 + 33 = 1 + 125 + 27 = 153
1634 = 1
4 + 64 + 34 + 44 = 1 + 1296 + 81 + 256 = 1634*/
#include<stdio.h>
int countDigits(int);
int power(int,int);
int isArm(int);
int main(){
    int n,num=1,count=0;
    printf("Enter the number of terms");
    scanf("%d",&n);
    while(count<=n){
        if(isArm(num)){
            printf("\n%d",num);
            count++;
        }
        num++;
    }
    return 0;
}
int countDigits(int n){
    int cnt=0;
    while(n!=0){
        cnt++;
        n/=10;
    }
    return cnt;
}
int power(int a,int b){
     int pro=1;
    for(int i=1;i<=b;i++){
        pro*=a;
    }
    return pro;
}
int isArm(int n){
    int org=n;
    int digits=countDigits(n);
    int sum=0;
    while(n!=0){
        sum+= power(n%10,digits);
        n/=10;
    }
    return org==sum;
}