/*Write a C program to display the following rhombus symbol structure, for example if entered size is 4 it
should produce following output.
   *
  ***
 *****
*******
 *****
  ***
   */
  #include<stdio.h>
  int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    //upper half
         for(int i=1;i<=size;i++){
        for(int j=1;j<=size-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    //Lower half
    for(int i=size-1;i>=1;i--){
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