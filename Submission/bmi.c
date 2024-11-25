#include <stdio.h>


int main() {
    float height = 1.82; // given height
    float weight = 72; // given weight
    float BMI= weight/ height*height; // we have to make a new variable BMI and calculate the BMI.
    printf("BMI calculated is: %f",BMI); // this will print the value of BMI.
    
    return 0;
}