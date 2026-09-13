/*Write a c program for bubble sort*/
#include<stdio.h>
void BubbleSort(int *,int);
int main(){
     int arr[25],size,ele;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    BubbleSort(arr,size);
    printf("After sorting :");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
void BubbleSort(int *arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}