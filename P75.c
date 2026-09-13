/* A positive integer is entered through the keyboard, write a function to find the binary equivalent of this
number using recursion.
*/
#include<stdio.h>
// void binary(int );
int binary(int);
int main(){
    int n;
    printf("Enter decimal number");
    scanf("%d",&n);
    printf("Binary equivalent : %d",binary(n));
    // binary(n);
    return 0;
}
// void binary(int n){
//     if(n<=0){
//         return 0;
//     }
//     binary(n/2);
//     printf("%d",n%2);
// }

int binary(int n){
    if(n==0){
        return 0;
    }
    return (n%2) + 10*binary(n/2);
}