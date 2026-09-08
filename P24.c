/*Write a program to calculate overtime pay of 3 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour*/
#include<stdio.h>
int main(){
    int hours;
    double overtimepay;
    double overtimeRate=12.00;
    for(int i=1;i<=3;i++){
        printf("\nENter the working hours of %d employee",i);
        scanf("%d",&hours);
        if(hours<=0){
            printf("Invalid input");
        }
        if(hours>40){
            overtimepay=(hours-40)*overtimeRate;
        }
        else{
            overtimepay=0.0;
        }
        printf("\nOvertime payment %.2f of %d employee",overtimepay,i);
    }

    return 0;
}