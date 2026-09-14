/*Write a program in C to print all unique elements in an array*/
#include<stdio.h>
int main(){
     int arr[25],size;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("unique elements :");
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
        }
        if(count==1){
            printf("%d",arr[i]);
        }
    }
    return 0;
}