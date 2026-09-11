/*57. Write a C program to display the following character rhombus structure, for example if entered size is 4
it should produce following output.
 A
 ABA
 ABCBA
ABCDCBA
 ABCBA
 ABA
 A*/
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
            printf("%c",k+64);
        }
        for(int l=i-1;l>=1;l--){
            printf("%c",l+64);
        }
        printf("\n");
    }
    for(int i=size-1;i>=1;i--){
        for(int j=1;j<=size-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%c",k+64);
        }
        for(int l=i-1;l>=1;l--){
            printf("%c",l+64);
        }
        printf("\n");
    }
    return 0;
 }