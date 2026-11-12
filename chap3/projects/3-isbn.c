// program that breaks down an ISBN entered by the user

#include <stdio.h>

int main(void) {
    int prefix,grp_identifier,pub_code,item_num,check_digit;

    printf("Enter the ISBN: ");
    scanf("%d-%d-%d-%d-%d",&prefix,&grp_identifier,&pub_code,&item_num,&check_digit);
    // scanf("%d",&isbn);

    printf("GS1 Prefix: %d\n",prefix);
    printf("Group Identifier: %d\n",grp_identifier);
    printf("Publisher Code: %d\n",pub_code);
    printf("Item number: %d\n",item_num);
    printf("Check Digit: %d\n",check_digit);
}
