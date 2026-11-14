// Decimal to octal

#include <stdio.h>

int main(void) {
    int num, i1,i2,i3,i4,i5;

    printf("Enter a number b/w 0 and 32767: ");
    scanf("%d",&num);

    i1 = num%8;
    num = num/8;
    i2 = num%8;
    num = num/8;
    i3 = num%8;
    num = num/8;
    i4 = num%8;
    num = num/8;
    i5 = num%8;
    num = num/8;

    printf("In octal, your number is: %d%d%d%d%d",i5,i4,i3,i2,i1);
}
