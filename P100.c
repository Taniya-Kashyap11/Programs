/* Write a program in C to count the frequency of each element of an array.
Test Case:
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times*/
#include<stdio.h>
struct Map
{
    int element;
    int frequency;
};
int main(){
     int arr[25],size,found;
       struct Map map[100];
       int n=0;
    printf("ENter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        found=0;
        for(int j=0;j<size;j++){
            if(map[j].element==arr[i]){
                map[j].frequency++;
                found=1;
                break;
            }
        }
        if(found==0){
            map[n].element=arr[i];
            map[n].frequency=1;
            n++;
        }
  
    }
    printf("Frequency of elements :\n");
    for(int i=0;i<n;i++){
        printf("%d occurs %d times\n",map[i].element,map[i].frequency);
    }
   return 0;
}    
