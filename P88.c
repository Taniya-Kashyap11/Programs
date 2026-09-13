/*Write a c program for linear search.
*/
#include<stdio.h>
void linearSearch(int *,int,int );
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
    linearSearch(arr,ele,size);
    return 0;
}
void linearSearch(int *arr,int ele,int size){
    int found=0;
    for(int i=0;i<size;i++){
        if(ele==arr[i]){
            printf("Element found");
          found=1;
          break;
        }
    }
    if(!found)
    printf("Not found");
   
}