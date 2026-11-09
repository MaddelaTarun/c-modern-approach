// how to pay amount using smallest number of $20, $10, $5 and $1 bills

#include <stdio.h>

int main(void){
    int amount, twenty_bill, ten_bill, five_bill, one_bill;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);

    printf("$20 Bills: %d\n", amount/20);
    amount = amount%20;

    printf("$10 Bills: %d\n", amount/10);
    amount = amount%10; 

    printf("$5 Bills: %d\n", amount/5);
    amount = amount%5;

    printf("$1 Bills: %d\n", amount);
}
