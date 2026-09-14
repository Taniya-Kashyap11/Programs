/*Write a C program for multiplication of two matrices*/

#include <stdio.h>
int main()
{
  int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if(c1!=r2){
        printf("Multiplication is not possible");
        return 0;
    }
    printf("Enter the elements of a:");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
     printf("Enter the elements of b:");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    
      for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j]=0;
            for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
          
          
        }
    } 
    printf("Muliplication Matrix\n");
     for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
   
}
