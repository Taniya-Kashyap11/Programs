/*Write a program to enter the size of pattern and produce the following pattern using only two for loops
for example if entered size is 5.

 * * * * 1
 * * * 1 2
 * * 1 2 3
 * 1 2 3 4
 1 2 3 4 5*/
 #include<stdio.h>
 int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    for(int i=0;i<=size;i++){
        for(int j=1;j<=size-i;j++){
            printf("*");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
 }