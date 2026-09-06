/*Any year is input through the keyboard. Write a program to determine whether the year is a leap year or
not*/
#include<stdio.h>
int main(){
    int yr;
    printf("Enter year");
    scanf("%d",&yr);
    if(yr%4==0){
        if(yr%100!=0 || yr%400==0){
            printf("Leap year");
             }else{
                printf("Not a leap year");
             }     
    }else{
        printf("Not a leap year");
    }
    return 0;
}