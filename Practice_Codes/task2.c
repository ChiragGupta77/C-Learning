#include <stdio.h>
// volume of cylinder generator
int main(){
    int r, h;
    printf("Radius(cm):");
    scanf("%d", &r);
    printf("Height(cm):");
    scanf("%d", &h);
    printf("Volume of your cylinder is %f cubic cm", (22.0/7.0)*r*r*h);
    return 0;
}