/*five-digit number is input through the keyboard,
 write a program to calculate the sum of its digits*/
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a five digit number");
    scanf("%d", &n);
    // sum += n % 10;
    // n /= 10;
    // sum += n % 10;
    // n /= 10;
    // sum += n % 10;
    // n /= 10;
    // sum += n % 10;
    // n /= 10;
    // sum += n % 10;
    sum = (n%10)+((n/10)%10)+((n/100)%10)+((n/1000)%10)+((n/10000)%10);
    printf("Sum of five digit number : %d", sum);
    return 0;
}
