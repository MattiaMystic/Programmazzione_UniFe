#include <stdio.h>
#include <math.h>

int main()
{
    int base, altezza;
    printf("Inserisci la base del rettangolo!\n");
    scanf("%d", &base);
    printf("Inserisci l'altezza del rettangolo!\n");
    scanf("%d", &altezza);
    if (base > 0 && altezza > 0)
    {
        printf("Il perimetro è: %d \n", (base + altezza) * 2);
        printf("L'area è: %d\n", base * altezza);
        printf("La diagonale è: %.2f\n", sqrt(pow(base, 2.0) + pow(altezza, 2.0)));
    }
}