/*Write a program in C to insert a number in a sorted array.
*/
#include<stdio.h>
int main(){
     int arr[25],size,ele;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
   printf("Enter the element to insert :");
   scanf("%d",&ele);
     int pos = 0;
    while(pos < size && arr[pos] < ele)
    {
        pos++;
    }
    for(int i=size;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    size++;
    printf("After insertion :");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}