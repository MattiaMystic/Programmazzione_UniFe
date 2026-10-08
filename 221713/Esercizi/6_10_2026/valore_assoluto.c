#include <stdio.h>

int main()
{
    int n;
    printf("Inserisci un numero n per calcolare il suo valore assoluto ovvero |n|\n");
    scanf("%d", &n);
    if (n >= 0)
    {
        printf("Il suo valore assoluto è %d \n", n);
    }
    else
    {
        printf("Il suo valore assoluto è %d \n", -n);
    }
    return 0;
}