/*Write a C program for binary search.*/
#include<stdio.h>
void BinarySearch(int *,int,int );
int main(){
     int arr[25],size,ele;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter he element to search :");
    scanf("%d",&ele);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    BinarySearch(arr,ele,size);
    return 0;
}
void BinarySearch(int *arr,int ele,int size){
        int i=0,j=size-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==ele){
                printf("Element found at %d position",mid+1);
                break;
            }else if(arr[mid]>ele){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
   
    printf("Element not found");
}