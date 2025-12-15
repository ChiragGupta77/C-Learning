#include <stdio.h>
// data type changing ninja technique
int main(){
    int a;
    float b = 6.9;
    a = (int) b; // not int(b) like python, instead its the vise-versa
    printf("%d\n", a);
    b = (float) a;
    printf("%f", b);

    return 0;
}