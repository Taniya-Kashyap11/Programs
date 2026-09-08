/*Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zero’s entered. Use do-while loop.
*/
#include<stdio.h>
int main(){
        int choice;
        int n;
        int pos=0;
        int neg=0;
        int zero=0;
        do{
            printf("ENter the number");
            scanf("%d",&n);
            if(n>0){
                pos++;
            }else if(n<0){
                neg++;
            }else{
                zero++;
            }
            printf("do you want to enter another number y/N");
            scanf("%d",&choice);
        }while(choice);
        printf("posititve : %d Negative : %d : zero : %d",pos,neg,zero);
    return 0;
}