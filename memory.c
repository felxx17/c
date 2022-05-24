#include <stdio.h>

int main (){

    char a;   //char = 1 byte, short 2, int 4, duble 8
    char b[5];
    char c[25];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);




    return 0;
}