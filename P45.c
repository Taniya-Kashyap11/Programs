/*Write a program to enter the size of pattern and produce the following pattern for example if entered
size is 5.
       *
     * *
   * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++ ){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}