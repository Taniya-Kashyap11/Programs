/* Write a function to compute the greatest common divisor given by Euclid’s algorithm, exemplified for j =
1980, K = 1617 as follows:-
1980 / 1617 = 1 1980 – 1 * 1617 = 363
1617 / 363 = 4 1617 – 4 * 363 = 165
363 / 165 = 2 363 – 2 * 165 = 33
5 / 33 = 5 165 – 5 * 33 = 0
Thus, the greatest common divisor is 33.
*/
#include<stdio.h>
int gcd(int,int);
int main(){
    int j,k;
    printf("Enter the value of j and k");
    scanf("%d%d",&j,&k);
    int divisor=gcd(j,k);
    printf("Greatest common divisor : %d",divisor);
    return 0;
}
int gcd(int j,int k){
    while(k!=0){
        int remainder=j%k;
        j=k;
        k=remainder;
    }
    return j;
}
