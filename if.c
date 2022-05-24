#include <stdio.h>

int main() {

    int age;
    printf("Quanti anni hai? ");
    scanf("%d", &age);

    if(age >= 18){
        printf("Sei maggiorenne");
    }
    else if(age < 0){
        printf("Yo man wtf");
    }
    else {
        printf("Sei minorenne");
    }

    return 0;
}