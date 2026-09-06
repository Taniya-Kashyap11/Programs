// Swap two numbers
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("After interchange a %d and b %d",a,b);
    return 0;

}
