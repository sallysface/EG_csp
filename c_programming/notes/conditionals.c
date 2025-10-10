//EG 7th Conditionals notes
#include <stdio.h>
#include <string.h>
int main(void){
    int grade;
    char name[20];
    printf("what is your grade? \n");
    scanf("%d", &grade);

    printf("what is your name? \n");
    scanf("%s", &name);

    //printf("%d\n", strcmp(name, "Ms.LaRose"));
    if(strcmp(name, "Ms.LaRose")==0){
        printf("You don't have a grade\n");
    }else if (grade >= 90){
    printf("You have an A!\n");
    }else if(grade >= 80){
    printf("you have a B \n");
    }else if(grade >= 70){
    printf("you have a C \n");
    }else{
    printf("You are failing, dumb dumb stupid boy\n");
    }

    return 0;
}
//What puts something inside of the “if” statement?
//if
//How are conditions written in C?
//    if(strcmp(name, "Ms.LaRose")==0){printf("You don't have a grade\n");}else if (grade >= 90){ printf("You have an A!\n"); }else if(grade >= 80){ printf("you have a B \n"); }else if(grade >= 70){ printf("you have a C \n"); }else{ printf("You are failing, dumb dumb stupid boy\n"); }
//How do we write elif conditions in C?
//else if
//When do else conditions run?
// if the previous is false
//What are the 3 logical operators in C?
/*
&& and
|| or
! not
*/