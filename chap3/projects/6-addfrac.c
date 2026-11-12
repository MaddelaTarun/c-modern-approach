// Calculate addition of fractions separated by + signs

#include <stdio.h>

int main(void) {
    int num1,denom1,num2,denom2;
    printf("Enter the two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d",&num1,&denom1,&num2,&denom2);

    int result_num = (num1*denom2)+(num2*denom1);
    int result_denom = (denom1*denom2);
    printf("The sum is %d/%d",result_num,result_denom);
}
