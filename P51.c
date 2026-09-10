/*Write a program to enter the size of pattern and produce the following pattern for example if entered
size is 5.
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size :");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                     printf("1 ");
            }else{
                printf("0 ");
            }
           
        }
        printf("\n");
    }
    return 0;
}