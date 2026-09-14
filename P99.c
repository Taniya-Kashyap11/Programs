/*Write a Program to Cyclically Rotate an Array by number N
Test Case 1:
Input: arr[] = {1, 2, 3, 4, 5}
N=2
Output: arr[] = {4, 5, 1, 2, 3}*/
#include<stdio.h>
void cyclicRotate(int*,int);
int main(){
     int arr[25],size,n;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of times you want to rotate ");
    scanf("%d",&n);
    n=n%size;
    for(int i=1;i<=n;i++){
          cyclicRotate(arr,size);
    }
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