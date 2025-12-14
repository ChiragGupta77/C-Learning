#include <stdio.h>
// Celsius to fahrenheit convertor
int main(){
    int c;
    printf("Type the temperature in celsius:");
    scanf("%d", &c);
    printf("%d Celsius is %f Fahrenheit", c, (1.8*c)+32);
    return 0;
}