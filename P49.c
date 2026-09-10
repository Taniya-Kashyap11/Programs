/*Write a program to enter the size of pattern and produce the following pattern for example if entered
size is 5.
 1
 2 1
 1 2 3
 4 3 2 1
 1 2 3 4 5
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        if(i%2==0){
            for(int j=i;j>=1;j--){
                printf("%d",j);
            }
        }else{
             for(int j=1;j<=i;j++){
                printf("%d",j);
            }
        }
        printf("\n");
     
    }
    return 0;
}