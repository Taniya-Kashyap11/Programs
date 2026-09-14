/*Write a C program to find out sum of diagonal element of a matrix.*/
#include <stdio.h>
int main()
{
    int a[10][10],size;
    printf("ENter the size of array ");
    scanf("%d", &size);
    printf("Enter the elements of a:");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
     
int sum=0;
     for (int i = 0; i < size; i++)
    {
        sum+=a[i][i];
      
    }
    printf("Sum of diagonal elements :%d",sum);
    return 0;
   
}
