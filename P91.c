/*Write a c program for insertion sort*/
#include<stdio.h>
void InsertionSort(int *,int);
int main(){
     int arr[25],size,ele;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    InsertionSort(arr,size);
    printf("After sorting :");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
void InsertionSort(int *arr,int size){  //o(n2) worst case average case
                                                //o(n) best case the inner loop will not run

    for(int i=0;i<=size-1;i++){
       int j=i;
        while( j>0 && arr[j-1]>arr[j]){
          
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            j--;
        }
    }
}