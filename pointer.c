#include <stdio.h>

int main(){

    int age = 23;
    int *pAge = &age;

    printf("adress of age: %p\n", &age);
    printf("value of age: %p\n", pAge);

    return 0;
}