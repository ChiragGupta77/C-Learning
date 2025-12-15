#include <stdio.h>
// Divisibility checker
int main(){
    int a;
    printf("Kindly enter a number:");
    scanf("%d", &a);
    int b = a%7;
    if (b==0){
        printf("%d is divisible by 7", a);
    }
    else{
        printf("%d is not divisible by 7", a);
    }
    return 0;

}
