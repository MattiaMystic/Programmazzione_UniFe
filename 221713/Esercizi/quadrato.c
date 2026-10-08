#include <stdio.h>

int main()
{
    int lato;
    printf("Inserisci la misura del lato:\n ");
    scanf("%d", &lato);
    if (lato > 0)
    {

        printf("Il perimetro è: %d\n", lato * 4);
        printf("L'area del quadrato è: %d\n", lato * lato);
    }
    else
    {
        printf("Valore lato sbagliato");
    }
}