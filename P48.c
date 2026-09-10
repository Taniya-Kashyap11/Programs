/*Write a program to enter the size of pattern and produce the following pattern for example if entered
size is 5.
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}