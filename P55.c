/* Write a C program to display the following number rhombus structure, for example if entered size is 4 it
should produce following output.
   1
  212
 32123
4321234
 32123
  212
   1
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size-i;j++){
            printf(" ");
        }
        for(int k=i;k>=1;k--){
            printf("%d",k);
        }
        for(int l=2;l<=i;l++){
            printf("%d",l);
        }
        printf("\n");
    }
    for(int i=size-1;i>=1;i--){
        for(int j=size-i;j>=1;j--){
            printf(" ");
        }
        for(int k=i;k>=1;k--){
            printf("%d",k);
        }
        for(int l=2;l<=i;l++){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}