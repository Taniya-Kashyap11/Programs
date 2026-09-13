/*Twenty-five number are entered from the keyboard into an array. Write a program to find out how
many of them are positive, how many are negative, how many are odd and how many are even.
*/
#include<stdio.h>
int main(){
    int arr[25],size;
    int pos=0,neg=0,odd=0,even=0;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            pos++;
           
        }else{
            neg++;
        }
         if(arr[i]%2){
                odd++;
            }else{
                even++;
            }
    }
    printf("positive :%d",pos);
      printf("negative :%d",neg);
        printf("even :%d",even);
          printf("odd :%d",odd);
  
}