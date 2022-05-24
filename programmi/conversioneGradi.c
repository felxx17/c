#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\nLa temperatura e' in Farenheit(F) o Centigradi(C)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'F'){
        printf("Inserisci la temperatura: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nLa temperatura in Centigradi e': %.1f", temp);
    }
    else if(unit == 'C'){
        printf("Inserisci la temperatura: ");
        scanf("%f", &temp);
        temp = ((temp * 9) / 5) + 32;
        printf("\nLa temperatura in Farenheit e': %.1f", temp);
    }
    else{
        printf("\nInserisci una temperatura!");
    }

    char invio;
    scanf("%c",&invio);
    return 0;
}