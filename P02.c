//program to convert and print distance in meters, feet, inches and centimeters
#include<stdio.h>
int main(){
    double kms;
    printf("Enter distance into kms :");
    scanf("%lf",&kms);
    printf("in meters %.2lf\n",kms*1000);
    printf("in feet %.2lf\n",kms*3280.84);
    printf("in inches %.2lf\n",kms*39370.0787402);
    printf("in cms %.2lf\n",kms* 100000);
    return 0;
}