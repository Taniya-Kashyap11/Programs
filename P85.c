/*Write a program to find out largest element of an array*/
#include<stdio.h>
#include<limits.h>
int largest(int*,int);
int main(){
    int arr[10],size;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Largest element : %d",largest(arr,size));
}
int largest(int* arr,int size){
  
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}