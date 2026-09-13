/*Write a program to copy the contents of one array into another in the reverse order using pointers*/
#include<stdio.h>
int main(){
     int arr[10],size, rev[10];
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=size-1;
    while(i<=j){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        rev[i]=arr[i];
        rev[j]=arr[j];
        i++;
        j--;
    }
    for(int i=0;i<size;i++){
        printf("%d",rev[i]);
    }
    return 0;
}    