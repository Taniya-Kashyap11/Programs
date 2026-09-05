//program to convert this temperature into Centigrade degrees.
#include<stdio.h>
int main(){
    double faren;
    printf("Enter temperature in farehenheit:");
    scanf("%lf",&faren);
    double celsius=(faren -32.0) *5.0/9.0;
    printf("in celsius %.2lf",celsius);
    return 0;
}
