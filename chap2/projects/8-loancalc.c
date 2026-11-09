// calculates remaining balance on a loan after the first second and third monthly payments

#include <stdio.h>

int main(void){
    float amount, roi_y, roi_m, month_pay,balance;

    printf("Enter the amount of loan: ");
    scanf("%f",&amount);
    printf("Enter the interest rate: ");
    scanf("%f",&roi_y);
    printf("Enter the monthly payment: ");
    scanf("%f",&month_pay);
    roi_m = (roi_y/100) / 12;
    printf("%f\n",roi_m);

    amount = amount + (amount*roi_m);
    balance = amount - month_pay;
    printf("First payment done, Pending balance: %.2f\n", balance);

    balance = balance + (balance*roi_m);
    balance = balance - month_pay;
    printf("Second payment done, Pending balance: %.2f\n", balance);

    balance = balance + (balance*roi_m);
    balance = balance - month_pay;
    printf("Third payment done, Pending balance: %.2f\n", balance);
}
