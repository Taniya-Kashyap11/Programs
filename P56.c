/*Write a C program to display the following number rhombus structure, for example if entered size is 4 it
should produce following output.
 1
 121
 12321
1234321
 12321
 121
 */
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int l=i-1;l>=1;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    for(int i=size-1;i>=1;i--){
        for(int j=1;j<=size-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int l=i-1;l>=1;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}