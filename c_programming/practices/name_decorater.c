//EG 7th name decorater
#include <stdio.h>
#include <string.h>
int main(void){
    char user_name[20];
    char back_deco[] = " ☆ ⋆★ ";
    char front_deco[] = " ★ ⋆☆ ";
    char decorated_name[60];

    printf("What is your first name? \n");
    scanf("%19s", user_name); // limit input to avoid overflow

    // Build decorated name: front + name + back
    strcpy(decorated_name, front_deco);
    strcat(decorated_name, user_name);
    strcat(decorated_name, back_deco);

    printf("Your super cool name is:\n%s\n", decorated_name);

    return 0;
}