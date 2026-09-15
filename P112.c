/*Write a program that converts a string like "124" to an integer 124.*/
#include <stdio.h>

int main()
{
    char str[20];
    int i, num = 0;

    printf("Enter a number: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + (str[i] - '0');
    }

    printf("Integer = %d", num);

    return 0;
}
