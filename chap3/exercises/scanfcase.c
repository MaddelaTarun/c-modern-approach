#include <stdio.h>

int main(void){
    int i;
    char buffer[10],buffer2[10];
    printf("Enter a number: "); // 23foo
    scanf("%d",&i);
    printf("Value of i: %d\n",i); // 23
    printf("\n");

    printf("--- String value check ---\n");
    scanf("%s",buffer); // doesnt take user input
    printf("Buffer value: %s\n",buffer); //foo

    printf("Enter String value: ");
    scanf("%s",buffer2); // takes user input
    printf("String value: %s\n",buffer2); // whatever user inputs
}


/*
Enter a number: 23foo
Value of i: 23

--- String value check ---
Buffer value: foo
Enter String value: hello
String value: hello
*/
