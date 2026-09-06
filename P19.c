/* Any year is entered through the keyboard, write a program to determine whether the year is leap or not.
Use the logical operators && and || operator*/
#include<stdio.h>
int main(){
    int yr;
    printf("Enter year");
    scanf("%d",&yr);
    if(yr%4==0){
        if(yr%100!=0 || yr%400==0){
            printf("Leap year");
        }else{
            printf("Non leap year");
        }
    }else{
        printf("Non leap year");
    }
    return 0;
}