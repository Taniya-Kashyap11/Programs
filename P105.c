/*Write a C program for addition of two matrices.*/
#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10] ,size;
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
      printf("Enter the elements of b:");
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }
    printf("After addition\n");
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
   
}
