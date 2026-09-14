/* Write a program to obtain transpose of a 3 x 3 matrix. The transpose of a matrix is obtained by
exchanging the elements of each row with the elements of the corresponding column*/
#include <stdio.h>
int main()
{
    int a[10][10],size;
    printf("Enter the size of array ");
    scanf("%d", &size);
    printf("Enter the elements of a:");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    //  for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {

    //        c[i][j]=a[j][i];
    //     }
    // }
      for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
          
        }
    } 
    printf("Transpose Matrix\n");
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
   
}
