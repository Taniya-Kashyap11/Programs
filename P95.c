/*Write a program in C to count the total number of duplicate elements in an array.
Test Case:
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/
#include<stdio.h>
int main(){
     int arr[25],size,count=0;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
               count++;
                break;
            }
        }
    }
   printf("Count %d",count);
    return 0;
}