// accepts date from user in form of mm/dd/yyyy and display in yyyymmdd

#include <stdio.h>

int main(void){
    int month,date,year;
    printf("Enter the date in mm/dd/yyyy format: ");
    scanf("%d/%d/%d",&month,&date,&year);
    printf("\n");
    printf("The entered date: %d%d%d",year,month,date);
}
