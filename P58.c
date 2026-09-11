/*Write a program to produce the following output:
 1
2 3
4 5 6
7 8 9 10*/
#include<stdio.h>
int main(){
    int cnt=1;
    int size;
    printf("Enter size");
    scanf("%d",&size);
    for(int i= 1;i<=size;i++){
        for(int j=1;j<=i;j++){
            printf(" %d",cnt);
            cnt++;
        }
        printf("\n");

    }
    return 0;
}