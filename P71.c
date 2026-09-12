/*Write a function that receives marks obtained by a student in 3 subjects and returns the average and percentage of these marks. Call this function from main( ) and print the results in main( ).
Hint: Use call by reference to return multiple values
*/
#include<stdio.h>
void calculate(int ,int,int,float* ,float*);
int main(){
    int m1,m2,m3;
    float avg,per;
    printf("Enter marks of 3 subjects :");
    scanf("%d%d%d",&m1,&m2,&m3);
    calculate(m1,m2,m3,&avg,&per);
    printf("Average : %.2f",avg);
    printf("Percentage : %.2f",per);
    return 0;
}
void calculate(int m1,int m2,int m3,float* avg,float* per){
    *avg=(m1+m2+m3)/3.0;
    *per=(m1+m2+m3)/3.0;
}