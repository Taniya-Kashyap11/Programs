/*Write a program to produce the following output:
 1
1 1
1 2 1
1 3 3 1
1 4 6 4 1*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        int value=1;
        for(int k=0;k<=size-i;k++){
            printf(" ");
        }
       for(int j = 0; j <= i; j++)
        {
            printf("%d ", value);

            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}