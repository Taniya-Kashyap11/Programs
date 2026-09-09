/*Write a c program to find out prime factor of given number. For example prime factors of 12 = 2 x 2 x 3
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    for(int i=2;i>1;i++){
        while(n%i==0){
            printf("%d\t",i);
            n/=i;
        }
    }
    return 0;
}