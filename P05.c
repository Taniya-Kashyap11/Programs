/*The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program
to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.*/
#include<stdio.h>
int main(){
    int l,b,r;
    printf("Enter length,breadth & radius");
    scanf("%d%d%d",&l,&b,&r);
    printf("Perimeter %d",(l+b)*2);
    printf("Area %d",l*b);
    printf("circumference %.2f",2*3.14*r);
    printf("area %.2f",3.14*r*r);
    return 0;
}