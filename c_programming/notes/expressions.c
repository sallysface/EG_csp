//EG 7th Expressions nothes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.14159265;
    printf("%d\n", year);
    printf("%d\n", 8/3);
    printf("%f.2\n", 8.0/3);
    printf("%d\n", (int) pow(2,4));

    year += 1;
    printf("%d\n", year);
    year++;
    printf("%d\n", year);



    return 0;
}





//What is the difference between an integer and a float in C?
//integer is whole number, float is decimal
//How does C handle integer division compared to float division?
//if it is integer division, and it isn't divisble, it will say 0
//List the arithmetic operators available in C and their functions.
// + addition - subtraction / division * multiplacation % modulo
//What is the modulus operator, and how is it used?
// % remainder 
//How do you round a float to the nearest integer in C?
// %f.2 %(data type).(decimal points)
//What is type casting in C? Provide an example of explicit type casting.
// changing data type forcefully
//How do compound assignment operators work in C? List three examples.
// += ++ !=
//What is the purpose of the math.h library? Name three functions it provides.
// to import math
//How do you print a float with a specific number of decimal places using printf()?
//.4
//What happens when you mix integer and float operations in C?
//