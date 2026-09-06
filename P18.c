/* Any character is entered through the keyboard, write a program to determine whether the character
entered is a capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various characters.
Characters ASCII Values
A – Z
a –z
0 – 9
Special symbols
65 – 90
97 – 122
48 – 57
0 – 47, 58 – 64, 91 – 96, 123 - 127
*/
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Capital letter");
    }else if(ch>='a' && ch<='z'){
        printf("Small letter");
    }else if(ch>='0' && ch<='9'){
        printf("Digits");
    }else{
        printf("Special symbol");
    }
    return 0;
}