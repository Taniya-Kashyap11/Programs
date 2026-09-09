/*Write a program to print the multiplication table of the number entered by the user. For example if the
entered number is 29 The table should get displayed in the following from: Use formatted printf()
function.
29 * 1 = 29
29 * 2 = 58
.
.
29 * 10 = 290*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("\n%d * %d = %d",n,i,n*i);
    }
    return 0;
}