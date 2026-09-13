/*Write a program to find out second largest element of an unsorted array.
*/
#include<stdio.h>
#include<limits.h>
int secondlargest(int*,int);
int main(){
    int arr[10],size;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Second Largest element : %d",secondlargest(arr,size));
}
int secondlargest(int* arr,int size){
  
    int max=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            second=max;
            max=arr[i];
        }else if(arr[i]<max && arr[i]>second){
            second=arr[i];
        }
    }
    return second;
}