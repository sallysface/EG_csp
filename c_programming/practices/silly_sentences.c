// EG 7th Silly Sentences
#include <stdio.h>
int main(void){
    char name[20];
    char verb[20];
    char emotion[20];
    char device[20];
    printf("Enter a name:\n");
    scanf("%19s", name);
    printf("Enter an action:\n");
    scanf("%19s", verb);
    printf("Enter an emotion:\n");
    scanf("%19s", emotion);
    printf("Enter a device:\n");
    scanf("%19s", device);
    printf("One day, %s decided to %s. After they did, they felt very %s, so they went home to tell their mom. When their mom heard what happened, she said 'It's always that %s.'\n", name, verb, emotion, device);
    return 0;
}