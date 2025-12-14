#include <stdio.h>
// Simple interest calculator
int main(){
    int p, r, t;
    printf("Principle amount:");
    scanf("%d", &p);
    printf("Rate of interest:");
    scanf("%d", &r);
    printf("Time period(in years):");
    scanf("%d", &t);
    printf("The simple interest is Rupees%f", p*r*t*0.01);
    return 0;
}