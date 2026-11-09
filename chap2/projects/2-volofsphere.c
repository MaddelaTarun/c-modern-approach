// volume of sphere

#include <stdio.h>
#define PI 3.14
#define FRACTION 4.0f/3.0f

int main(void){
    float radius,volume;
    printf("Enter the value of radius: ");
    scanf("%f",&radius);
    volume = FRACTION*PI*radius*radius*radius;
    printf("Volume of sphere: %.2f",volume);
}
