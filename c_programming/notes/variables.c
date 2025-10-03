#include <stdio.h>

int main(void){
    int grade; //4 bytes
    float pi = 3.14; //4 bytes
    double long_pi = 3.1415926358; //8 bytes
    char letter_grade; //1 byte
    char name[] = "Erin"; //

    printf("what is your grade as a whole number? ");
    scanf(" %d", &grade);

    printf("you have a %d, in the class. That is an %c\n", grade, letter_grade);
    return 0;
}

//What is the main difference between declaring variables in Python and C?
// in c you have to speficy what kind of varible 
//In C, what is the purpose of specifying a data type when declaring a variable?
// so it knows how uch space it needs to save it
//List three common data types used in C and their corresponding format specifiers for printf().
// float;f, double;lf, 
//How do you declare and initialize an integer variable named "age" with the value 25 in C?
//int age = 25;
//What is the difference between printf() and scanf() functions in C?
//print is what it shows, 
//How do you add comments in C?
// two forward slashes
//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
// so you can use inputs and outputs 
//In C, what is the significance of the main() function?
// to prevent bugs
//What is the difference between %d and %f format specifiers in printf()?
// d is for integers, f is for floats
//How do you print a newline character in C?
// \n
//What is the purpose of the & symbol when using scanf() to get user input?
// to tell where it should be stored
//How do you declare a constant in C? Provide an example.
// const float = 25