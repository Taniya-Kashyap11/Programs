/*Calculate the length of array without using loop*/
#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of array = %d", length);
    return 0;
}
