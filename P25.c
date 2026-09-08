/*Write a program to print all the ASCII values and their equivalent characters using a while loop. The
ASCII values vary from 0 to 255*/
#include<stdio.h>
int main(){
    
    for(int i=0;i<=255;i++){
        printf("\n %d | %c",i,i);
    }
    return 0;
}