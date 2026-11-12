// Enter numbers from 1-16 in any order and display in 4x4 arrangement

#include <stdio.h>

int main(void) {
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,num16;

    printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10,&num11,&num12,&num13,&num14,&num15,&num16);

    printf("\n");
    printf("----- 4x4 Row -----\n");
    printf("%d\t%d\t%d\t%d\t\n",num1,num2,num3,num4);
    printf("%d\t%d\t%d\t%d\t\n",num5,num6,num7,num8);
    printf("%d\t%d\t%d\t%d\t\n",num9,num10,num11,num12);
    printf("%d\t%d\t%d\t%d\t\n",num13,num14,num15,num16);

    int row1_sum = num1+num2+num3+num4;
    int row2_sum = num5+num6+num7+num8;
    int row3_sum = num9+num10+num11+num12;
    int row4_sum = num13+num14+num15+num16;

    printf("Row sums: %d %d %d %d\n",row1_sum,row2_sum,row3_sum,row4_sum);

    int col1_sum = num1+num5+num9+num13;
    int col2_sum = num2+num6+num10+num14;
    int col3_sum = num3+num7+num11+num15;
    int col4_sum = num4+num8+num12+num16;

    printf("Column sums: %d %d %d %d\n",col1_sum,col2_sum,col3_sum,col4_sum);

    int diag1_sum = num1+num6+num11+num16;
    int diag2_sum = num13+num10+num7+num4;

    printf("Diagonal sums: %d %d",diag1_sum,diag2_sum);
}
