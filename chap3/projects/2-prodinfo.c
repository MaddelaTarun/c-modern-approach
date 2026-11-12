// Enter item number, unit price and date of purchase, should return details in tabular like format

#include <stdio.h>

int main(void){
    int item_no, month,date,year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d",&item_no);
    printf("\n");

    printf("Enter unit price: ");
    scanf("%f",&unit_price);
    printf("\n");

    printf("Enter purchase date: ");
    scanf("%d/%d/%d",&month,&date,&year);
    printf("\n");

    printf("Item\tUnit\tPurchase\t\n\tPrice\tDate\n%d\t$ %.2f\t%02d/%02d/%d",item_no,unit_price,month,date,year);

}
