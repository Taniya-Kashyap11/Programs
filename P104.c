/*Write a program to pick up the largest number from any 3 row by 3 column matrix.*/
#include <stdio.h>
#include <limits.h>
int largest(int arr[][10], int size);
int main()
{
    int arr[10][10], size;
    printf("ENter the size of array ");
    scanf("%d", &size);
    printf("Enter the elements:");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }
    printf("Largest element : %d", largest(arr, size));
}
int largest(int arr[][10], int size)
{

    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}