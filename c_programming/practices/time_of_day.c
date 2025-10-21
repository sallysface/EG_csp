// EG 7th Time of Day
#include <stdio.h>
int main(void){
    int hour;

    printf("Enter the time in military time:\n");
    scanf("%d", &hour);
    if (hour < 12 && hour >= 5) {
        printf("Good Morning! \n");
    } else if (hour >= 12 && hour < 18) {
        printf("Good Afternoon! \n");
    } else {
        printf("Good Night! \n");
    }
}