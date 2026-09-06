/* Write a program which reads a character from keyboard and reports whether it is a vowel, consonant or
any other non-alphabet. Use the logical operators && and || operator.
*/
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90||ch>=97 && ch<=122){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Vowel");
    }else{
        printf("Consonant");
    }
}else{
    printf("Non-alphabet");
}
    return 0;
}