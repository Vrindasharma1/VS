#include <stdio.h>

int main() {
    float fahrenheit = 98.3;  // temperature given in F
    float cel= (fahrenheit -32) * 5/9;   //make a new variable C and convert the respective temp into celcius
    printf("Temp in celcius is: %f",cel);   //print the value of temp in celcius.
    
    return 0;
}