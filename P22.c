/* If the three sides of a triangle are entered through the keyboard, write a program to check whether the
triangle is isosceles, equilateral, scalene or right angled triangle.
Isosceles : Has two sides equal and third is different.
Equilateral : Has all three sides equal.
Scalene : None of the tree sides are equal.
Right Angled : Pythagoras theorem (H2 = B2 + P2
) is true.*/
 #include<stdio.h>
 int main(){
    int s1,s2,s3;
    printf("Enter the sides of triangle :");
    scanf("%d%d%d",&s1,&s2,&s3);
    if( s1==s2 && s2==s3){
        printf("Equilateral traingle");
    }else if(s1==s2 || s1==s3|| s2==s3){
        printf("Isosceles triangle");
    }else{
        printf("scalene triangle");
    }
    long long hypotenuse,a,b;
    if(s1>=s2 && s1>=s3){
        hypotenuse=s1;
        a=s2;
        b=s3;
    }else if(s2>=s1 && s2>=s3){
        hypotenuse=s2;
        a=s1;
        b=s3;
    }else{
        hypotenuse=s3;
        a=s1;
        b=s2;
    }
    if(hypotenuse*hypotenuse == a*a + b*b){
        printf("\nRight angled traingle");
    }
    return 0;
 }