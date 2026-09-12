/* Write a program to calculate permutation nPr. nPr represents n permutation r and
value of nPr is (n!) / (n-r)!. Use the following functions:
void main();
int factorial( int );
Input and output should be in main function only.
Test Case:
Input: n = 3, r = 3
Output: 6
Explanation: 3!/(3-3)! = 3!/0! = 6/1 = 6*/
#include<stdio.h>
int npr(int,int);
int factorial(int n);
int main(){
    int n,r;
    printf("Enter n and r");
    scanf("%d%d",&n,&r);
    int result=npr(n,r);
    if(result==-1){
        printf("Invalid input");
    }else{
         printf("npr : %d",result);
    }
   
    return 0;
}
int npr(int n,int r){
    if(r > n || n < 0 || r < 0)
        return -1;
    return factorial(n)/factorial(n-r);
}
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}