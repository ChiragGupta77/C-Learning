#include <stdio.h>
// switch and cases ---> similar to if-else
int main(){
    int a;
    printf("Value:");
    scanf("%d", &a);
    switch (a){ // they're hardly used, if-else is better.
    case 1:
        printf("ONE"); // these breaks are important to avoid multiple
        break;        // cases reading in C.
    case 2:
        printf("TWO");
        break;
    default: // applies when no case mathces
        printf("I don't know");
        break;
    }
    return 0;
}