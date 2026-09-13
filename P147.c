/*Program in C to print 1 to 100 without using loop.
*/
#include<stdio.h>
void print(int);
int main(){
    print(1);
    return 0;
}
void print(int n){
    if(n>100){
        return ;
    }
    printf("%d \n",n);
    print(n+1);
}