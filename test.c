#include <stdio.h>
#include <math.h>

int main(){
    
    const double PI = 3.14159;
    double raggio;
    double circonferenza;

    printf("\nScrivi il raggio del cerchio: ");
    scanf("%lf", &raggio);

    circonferenza = raggio * PI * 2;

    printf("\nLa circonferenza e' %lf", circonferenza);
    
    return 0;
}