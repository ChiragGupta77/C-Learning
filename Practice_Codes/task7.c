#include <stdio.h>
// Pass or fail determination 
int main(){
    int m1,m2,m3;
    printf("Marks1:");
    scanf("%d", &m1);
    printf("Marks2:");
    scanf("%d", &m2);
    printf("Marks3:");
    scanf("%d", &m3);

    if (m1<33 || m2<33 || m3<33){
        printf("You are failed!\nless marks in individual subject(s).\n");
    }
    else if ((m1+m2+m3)/3<40){
        printf("You are failed!\nReason: less average percentage.\n");
    }
    else{
        printf("You are passed\n");
    }
    printf("Good Bye <3!");
    return 0;
}