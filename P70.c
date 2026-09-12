/*Write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers. Call this function from main() and print the results in main().
Hint: Use call by reference to return multiple values*/
#include<stdio.h>
#include<math.h>
void calculate(int,int,int,int,int,int*,float*,float*);
int main(){
    int a,b,c,d,e;
    int sum;
    float avg,sd;
    printf("Enter 5 numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    calculate(a,b,c,d,e,&sum,&avg,&sd);
    printf("\nSum : %d",sum);
    printf("\nAverage : %.2f",avg);
    printf("\nStandard Deviation : %.2f",sd);
    return 0;
}
void calculate(int a,int b,int c,int d,int e,int* sum,float* avg,float* sd){
    *sum= a+b+c+d+e;
    *avg=*sum/5.0;
    *sd=sqrt((
        (a- *avg)*(a- *avg)+
         (b- *avg)*(b- *avg)+
         (c- *avg)*(c- *avg)+
         (d- *avg)*(d- *avg)+
          (e- *avg)*(e- *avg)

    )/5.0);
}
