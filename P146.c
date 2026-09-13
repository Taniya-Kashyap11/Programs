/*Write a c program to add two numbers without using addition operator*/
#include<stdio.h>
int add(int,int);
int main(){
    int a,b;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    // printf("Sum : %d",a-(-b)); Aproach 1
    printf("Sum : %d",add(a,b));

    return 0;
}
int add(int a, int b)
{
    while(b != 0)
    {
        int carry = (a & b) << 1; // calculates the carry
        a = a ^ b; // add bits without carry
        b = carry;
    }

    return a;
}