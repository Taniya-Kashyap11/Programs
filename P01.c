//  program to calculate his gross salary
#include<stdio.h>
int main(){
    int basicSalary;
    printf("Enter Basic salary: ");
    scanf("%d",&basicSalary);
    int DA= (basicSalary*40)/100;
    int HRA=(basicSalary*20)/100;
    int grossSalary=basicSalary+DA+HRA;
    printf("Gross Salary :%d",grossSalary);
    return 0;
}