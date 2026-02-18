#include <stdio.h>
#include <math.h>

void calculatePrice(float value);

int main() {
    float value;
    
    printf("enter value :");
    scanf("%f", &value);
    calculatePrice(value);

return 0;

}



void calculatePrice(float value) { 
    value = value + (value * 0.18);
    printf(" final price is : %f",value); 

}