/*A library charges per day fine for every book returned late. For first 5 days the fine is 50 paise per day, for
6-10 days fine is one rupee per day and above 10 days and till 30 days fine is 5 rupees per day. If you
return the book after 30 days your membership will be cancelled. Write a program to accept the number
of days the member is late to return the book and display the fine or appropriate message.
Hint : late_days = 4 fine = Rs 2
late_days = 7 fine = Rs 4.50
late_days = 12 fine = Rs 17.50*/
#include<stdio.h>
int main(){
    int days;
    double fine;
    printf("Enter days");
    scanf("%d",&days);
    if(days<=5){
        fine=days*0.5;
        printf("Fine %.2lf",fine);
    }else if(days>=6 && days<=10){
        fine=((days-5)*1)+2.5;
         printf("Fine %.2lf",fine);
    }
    else if(days>10 && days<=30){
        fine=((days-10)*5)+7.5;
         printf("Fine %.2lf",fine);
    }else{
        printf("Membership cancelled");
    }
    return 0;
}