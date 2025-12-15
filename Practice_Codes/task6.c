#include <stdio.h>
// Grade teller from marks
int main(){
    int a;
    printf("Enter you Marks(out of 100):");
    scanf("%d", &a);
    if (a>100){
        printf("WTF!");
    }   
    else if (a>90){
        printf("A grade");
    }
    else if (a>80)
    {
        printf("Grade B");
    }
    else if (a>70)
    {
        printf("Grade C");
    }
    else if (a>60)
    {
        printf("Grade D");
    }
    else if (a>50)
    {
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }
    return 0;
}