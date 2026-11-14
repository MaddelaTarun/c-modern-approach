// program to reverse the two digit number

#include <stdio.h>

int main(void) {
    int num,rev,rem;
    printf("Enter the two digit number: ");
    scanf("%d", &num); // 28

    rem = num%10;
    rev = (rem*10) + num/10;

    printf("Reversed digits %d",rev);
}
