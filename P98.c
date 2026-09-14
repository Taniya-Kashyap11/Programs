/*Write a Program to Cyclically Rotate an Array by One
Test Case 1:
Input: arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}
Test Case 2:
Input: arr[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5}
*/
#include<stdio.h>
void cyclicRotate(int*,int);
int main(){
     int arr[25],size;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    cyclicRotate(arr,size);
     printf("After rotation the elements:");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
   return 0;
}    
void cyclicRotate(int *arr,int size){
    int last=arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
}