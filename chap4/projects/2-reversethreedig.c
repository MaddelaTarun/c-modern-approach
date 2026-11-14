// Reverse 3 digit number

#include <stdio.h>

int main(void) {
    int num,rev=0,rem;
    printf("Enter the three digit number: ");
    scanf("%d",&num);

    rem = num%10;
    rev = rev*10 + rem;
    num = num/10;

    rem=num%10;
    rev=(rev*10) + rem;
    num=num/10;

    rem=num%10;
    rev=(rev*10)+rem;

    printf("Reversed three digit number is: %d",rev);
}
