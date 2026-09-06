/* A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input
through the keyboard, find the total number of currency notes of each denomination the cashier will have
to give to the withdrawer.
Test Case: Amount = Rs 570 Hundred_Note = 5 Fifity_Note = 1 Ten_Note = 2*/
#include<stdio.h>
int main(){
    int amount;
    printf("ENter the amount to withdraw :");
    scanf("%d",&amount);
    int hundreds=(amount/100);
    int fifty=((amount%100)/50);
    int tens=(((amount%100)%50)/10);
    printf("Hundred_note : %d Fifty_note : %d Ten_note : %d",hundreds,fifty,tens);

    return 0;
}