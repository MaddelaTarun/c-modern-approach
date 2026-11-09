// displays amount added after tax

#include <stdio.h>

int main(void){
    float amt, tax_amt;
    printf("Enter an amount: ");
    scanf("%f",&amt);
    tax_amt = amt + (0.05*amt);
    printf("With tax added: %.2f",tax_amt);
}
