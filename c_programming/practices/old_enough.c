//EG 7th financial calculator 
#include <stdio.h>
int main(void){
    int age;
    printf("How old are you? \n");
    scanf("%d", &age);


    if (age >= 18){
    printf("You can vote!\n");
    }else if(age >= 16 && age <18){
    printf("You can drive! \n");
    }else if(age == 15){
    printf("You can get a learners permit! \n");   
    }else if(age >=4 && age < 15){
    printf("You can go to school! \n");
    }else{
    printf("You are just a babby \n");
    }
    return 0;
}