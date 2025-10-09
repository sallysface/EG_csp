//EG 7th name decorater
#include <stdio.h>
#include<string.h>
int main(void){
    char user_name[20];
    char back_deco[] = " ☆ ⋆★ ";
    char front_deco[] = " ★ ⋆☆ ";

    printf("What is your first name? \n");
    scanf("%c", user_name);
    strcat(front_deco, user_name);
    strcat(user_name, back_deco);
    printf("Your super cool name is \n %c", user_name);


}