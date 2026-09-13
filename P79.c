/*Given three variables num1, num2, num3, num 4, num5 write a function to circularly shift their values to
left or right N times (Input L for left shift and R for right sift.
Example 1:
num1 = 10, num2 = 20 , num3 = 30 , num 4 = 40, num5 = 50
N=2 So we have to make 1 right sift and result will
Shift = R
num1 = 40, num2 = 50 , num3 = 10 , num 4 = 20, num5 = 30
Example 2:
num1 = 10, num2 = 20 , num3 = 30 , num 4 = 40, num5 = 50
N=1 So we have to make 3 right sift and result will
Shift = L
num1 = 20, num2 = 30 , num3 = 40 , num 4 = 50, num5 = 10*/
#include<stdio.h>
void leftShift(int*,int*,int*,int*,int*);
void rightShift(int*,int*,int*,int*,int*);
int main(){
    int num1,num2,num3,num4,num5,n;
    char choice;
    printf("Enter the values of num1 num2 num3 num4 num5");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
    printf("Enter the number of circular shift you want to perform");
    scanf("%d",&n);
    printf("Enter the choice for right shift R and L for left Shift");
    scanf(" %c",&choice);
    for(int i=1;i<=n;i++){
        if(choice=='l' || choice=='L'){
                leftShift(&num1,&num2,&num3,&num4,&num5);  
        }else if (choice=='r' || choice=='R'){
             rightShift(&num1,&num2,&num3,&num4,&num5);
        }else{
            printf("Invalid choice");
        }
    }
    printf("\nAfter shift \n");
    printf("num1 : %d num2 : %d num3 : %d num4 : %d num5 : %d",num1,num2,num3,num4,num5);
    return 0;
}
void  leftShift(int* num1,int* num2,int* num3,int* num4,int* num5){
    int temp=*num1;
    *num1=*num2;
    *num2=*num3;
    *num3=*num4;
    *num4=*num5;
    *num5=temp;
}
void  rightShift(int* num1,int* num2,int* num3,int* num4,int* num5){
    int temp=*num5;
    *num5=*num4;
    *num4=*num3;
    *num3=*num2;
    *num2=*num1;
    *num1=temp;
}