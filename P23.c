/*In a company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job. If the time taken by the worker is between 2-10 hours, then the worker is said to be highly efficient. If the time required by the worker is between 10-20 hours, then the worker ordered to improve
speed. If the time taken is between 20-30 hours, the worker is given training to improve his speed, and if the time taken by the worker is more than 30 hours, then the worker 
has to leave the company. If the
time taken by the worker is input through the keyboard, write a program to print the efficiency of the
worker.
*/
#include <stdio.h>
int main()
{
    int hours;
    printf("Enter working hours");
    scanf("%d",&hours);
    if(hours<=0){
        printf("Invalid working hours");
    }
     else if (hours < 2) {
        printf("Efficiency category not defined\n");
    }
   else if(hours>=2 && hours<10){
        printf("Highly efficient");
    }else if(hours>=10 && hours<20){
        printf("Improve speed");
    }else if(hours>=20 && hours<30){
        printf("Given training");
    }else{
        printf("Leave company");
    }
    return 0;
}