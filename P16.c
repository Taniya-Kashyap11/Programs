/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the
youngest of the three*/
#include<stdio.h>
int main(){
    int ram_age,sham_age,ajay_age;
    printf("Enter the age of ram");
    scanf("%d",&ram_age);
    printf("Enter the age of sham");
    scanf("%d",&sham_age);
    printf("Enter the age of ajay");
    scanf("%d",&ajay_age);
    if(ram_age<sham_age && ram_age<ajay_age){
        printf("Ram is youngest");
    }
    else if(sham_age<ram_age && sham_age<ajay_age){
        printf("sham is youngest");
    }else{
        printf("Ajay is youngest");
    }
    return 0;
}