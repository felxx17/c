#include <stdio.h>

int main() {

    int voto;

    printf("Inserisci il tuo voto: ");
    scanf("%d", &voto);

    switch (voto)
    {
    case 10:
        printf("Ottimo\n");
        break;
    case 9:
        printf("Distinto\n");
        break;
    case 8:
        printf("Buono\n");
        break;
    case 7:
        printf("Discreto\n");
        break;
    case 6:
        printf("Sufficiente\n");
        break;
    case 5:
        printf("Insufficiente\n");
        break;
    case 4:
        printf("Gravemente insufficiente\n");
        break;
    default:
        printf("Inserisci un voto valido!\n");
    }

    return 0;
}