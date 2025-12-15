#include <stdio.h>
// Upper case of lower case identifier
int main(){
    char a;
    printf("Character:");
    scanf("%c", &a);
    if ((int)a>=97 && (int)a<=122){
        printf("Lower-Case!");
    }
    else{
        printf("Upper-Case!");
    }
    return 0;
}