/*Remove duplicates elements from an array
Example :
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4]
*/
#include<stdio.h>
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
            if(arr[i]==arr[j]){
                for(int k=j;k<size;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
     printf("After romoving duplicate elements:");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
   return 0;
}    
