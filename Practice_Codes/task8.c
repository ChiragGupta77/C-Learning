#include <stdio.h>
// Leap year identifier
int main(){
    int year;
    printf("Year:");
    scanf("%d", &year);
    if ((year%4==0 && year%100!=0) || (year%400==0)){
        printf("The year %d is leap year", year);
    }
    else{
        printf("Nope, %d ain't a leap year", year);
    }
    return 0;
}