/* Any year is entered through the keyboard. Write a function to determine whether the year is a leap year
or not. Call this function from main() and print the results in main().
*/
#include<stdio.h>
int isLeap(int);
int main(){
    int yr;
    printf("Enter year");
    scanf("%d",&yr);
    if(isLeap(yr)){
        printf("Leap Year");
    }else{
        printf("Not a leap year");
    }
    return 0;
}
int isLeap(int yr){
    if(yr%4==0){
        if(yr%100!=0 || yr%400==0){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}