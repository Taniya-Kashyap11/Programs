//  program to calculate his gross salary
#include<stdio.h>
int main(){
    long long basicSalary;
    printf("Enter Basic salary: ");
    scanf("%lld",&basicSalary);
    if (basicSalary <= 0) {
    printf("Invalid salary");
    return 0;
}
    long long  DA= (basicSalary*0.04);
    long long  HRA=(basicSalary*0.20);
    long long grossSalary=basicSalary+DA+HRA;
    printf("Gross Salary :%lld",grossSalary);
    return 0;
}