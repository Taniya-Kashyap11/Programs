/* Write a c program which deletes the duplicate element of an array*/
#include<stdio.h>
void InsertionSort(int *,int);
int main(){
     int arr[25],size;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("After Removing duplicates :");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}