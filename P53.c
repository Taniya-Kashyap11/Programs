/* Write a program to draw a Fibonacci triangle as below for example if entered size is 7 it should produce
following output.
0 1
0 1 1
0 1 1 2
0 1 1 2 3
0 1 1 2 3 5
0 1 1 2 3 5 8
0 1 1 2 3 5 8 13
 */
#include<stdio.h>
int main(){
    int size;
  
    printf("Enter the size");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
          int a=0,b=1,c;
        for(int j=1;j<=i+1;j++){
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
        printf("\n");
    }
    return 0;
}