/*Write a program to enter the size of pattern and produce the following pattern for example if entered
size is 5.
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
 * */
#include<stdio.h>
int main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    for(int i=size;i>=1;i--){
        for(int j=1;j<=size-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}