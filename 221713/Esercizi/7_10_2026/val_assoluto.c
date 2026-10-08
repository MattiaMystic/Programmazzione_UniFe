#include <stdio.h>

int main()
{
    int num;
    printf("Inserisci un numero per vedere il suo valore assoluto!\n");
    scanf("%d", &num);
    printf("Il valore assoluto è: %d!", num >= 0 ? num : -num);
    return 0; 
}