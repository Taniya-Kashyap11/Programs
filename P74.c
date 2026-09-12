/* Write a recursive function to obtain the first N numbers of a Fibonacci sequence. In a Fibonacci
sequence the sum of two successive terms gives the third term. Following are the first few terms of the
Fibonacci sequence:
1 1 2 3 5 8 13 21 23 55 89…..
*/
#include<stdio.h>
int fib(int);
int main(){
    int n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
          printf("%d\t",fib(i)) ;
    }
    return 0;
}
int fib(int n){
    if(n<=1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}