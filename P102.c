/*Find All Pairs With Given Sum
Given a 0 indexed array arr[] and a target value, the task is to find all possible indices (i, j) of
pairs (arr[i], arr[j]) whose sum is equal to target and i != j.
Examples 1:
Input: arr[] = [10, 20, 30, 20, 10, 30], target = 50
Output: [[1, 2], [1, 5], [2, 3], [3, 5]]
Explanation: All pairs with sum = 50 are:
arr[1] + arr[2] = 20 + 30 = 50
arr[1] + arr[5] = 20 + 30 = 50
arr[2] + arr[3] = 30 + 20 = 50
arr[3] + arr[5] = 20 + 30 = 50
Examples 2:
Input: arr[] = [10, 20, 30, 20, 10, 30], target = 80
Output: []
Explanation: No pairs with sum = 80.*/
#include<stdio.h>
int main(){
     int arr[25],size,target,found=0;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target :");
    scanf("%d",&target);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
               printf("[%d,%d]",i,j);
               found=1;
            }
        }
    }
    if(found==0){
        printf("No such pairs");
    }
   return 0;
}    
