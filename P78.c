/* Given five variables num1, num2, num3, num4, num5 write a function to circularly shift their values to right N times.
Example 1:
num1 = 10, num2 = 20 , num3 = 30 , num 4 = 40, num5 = 50
N=1 So we have to make 1 right sift and result will
num1 = 50, num2 = 10 , num3 = 20 , num 4 = 30, num5 = 40
Example 2:
num1 = 10, num2 = 20 , num3 = 30 , num 4 = 40, num5 = 50
N=3 So we have to make 3 right sift and result will
num1 = 30, num2 = 40 , num3 = 50 , num 4 = 10, num5 = 20*/
#include<stdio.h>
void rightShift(int*,int*,int*,int*,int*);
int main(){
    int num1,num2,num3,num4,num5,n;
    printf("Enter the values of num1 num2 num3 num4 num5");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
    printf("Enter the number of right shift you want to perform");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    rightShift(&num1,&num2,&num3,&num4,&num5);
    }
    printf("After shift \n");
    printf("num1 : %d num2 : %d num3 : %d num4 : %d num5 : %d",num1,num2,num3,num4,num5);
    return 0;
}
void  rightShift(int* num1,int* num2,int* num3,int* num4,int* num5){
    int temp=*num5;
    *num5=*num4;
    *num4=*num3;
    *num3=*num2;
    *num2=*num1;
    *num1=temp;
}