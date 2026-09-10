/*. Write a program to enter the size of pattern and produce the following pattern for example if entered
size is 5.
       1
     2 3 2
   3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5 
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i+j-1);
        }
        for(int j=i-1;j>=1;j--){
            printf("%d",i+j-1);
        }
        printf("\n");
    }
    return 0;
}