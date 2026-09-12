/*. Write a program that would print the number of days in a month given the month and year as two
integers. Your program should take two integers for month (between 1 and 12) and year (between 1000
to 9999) and print the days in a line by itself. Sample input 2 2000 Expected output 29. Use the following
function for same:
*/
#include<stdio.h>
int days(int,int);
int isLeap(int);
int main(){
    int month,year;
    printf("Enter month and year");
    scanf("%d%d",&month,&year);
    printf("Days : %d",days(month,year));
    return 0;
}
int days(int month,int year){
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        return 31;
    }
    else if(month==2){
        if(isLeap(year)){
            return 29;
        }else{
            return 28;
        }
    }else{
        return 30;
    }
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