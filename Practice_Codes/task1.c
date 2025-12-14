#include <stdio.h>
// Area of rectangle generator
int main(){
    int l;
    int b;
    printf("Type the length(cm):");
    scanf("%d", &l);
    printf("Type the breadth(cm):");
    scanf("%d", &b);
    printf("The area of the rectangle is %dsq.cm", l*b);
    return 0;
}