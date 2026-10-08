#include <stdio.h>

int main()
{
    // versione 1
    /*
    int a,b,c;
    printf("Inserisci il primo numero: \n");
    scanf("%d",&a);
    printf("Inserisci il secondo numero: \n");
    scanf("%d",&b);
    printf("Inserisci il terzo numero: \n");
    scanf("%d",&c);

    //somma 1
    printf("La somma è: %d\n",a+b+c);
    */
    // versione 2
    int somma = 0, a;
    printf("Inserisci il primo numero: \n");
    scanf("%d", &a);
    somma += a;
    printf("Inserisci il secondo numero: \n");
    scanf("%d", &a);
    somma += a;
    printf("Inserisci il terzo numero: \n");
    scanf("%d", &a);
    somma += a;

    // somma 2
    printf("La somma dei tre numeri è: %d\n", somma);
}