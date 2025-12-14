#include <stdio.h>
int main(){
    int number;
    printf("What's you favourite number\n");

/* %d --> used for int
   %c --> used for char 
   %f --> used for float */ 
       
    scanf("%d", &number); // scanf is for input
    printf("%d is your favourite number\nGood Bye!!", number);
    return 0;
}