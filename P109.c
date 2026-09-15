/*If the string "Alice in wonder land" is fed to the following scanf( ) statement, what will be the contents
of the arrays str1, str2, str3 and str4? scanf ( "%s%s%s%s%s", str1, str2, str3, str4 ) ;
*/
#include<stdio.h>
int main(){
     char str1[20], str2[20], str3[20], str4[20];
    printf("Enter a string: ");
    scanf("%s %s %s %s", str1, str2, str3, str4);
    printf("\nstr1 = %s", str1);
    printf("\nstr2 = %s", str2);
    printf("\nstr3 = %s", str3);
    printf("\nstr4 = %s", str4);
    return 0;
}