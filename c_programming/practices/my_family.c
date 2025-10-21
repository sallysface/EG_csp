// EG 7th My Family Loop
#include <stdio.h>
int main(void){
 char siblings[4][20] = {"Erin", "Jaiden", "Megan", "Jackson"};

 for (int i = 0; i < 4; i++) {
     printf("Hello %s! \n", siblings[i]);
 }

 return 0;
}