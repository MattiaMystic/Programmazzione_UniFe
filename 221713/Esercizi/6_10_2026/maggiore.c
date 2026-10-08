#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Inserisci il primo e il secondo numero!\n");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
    {
        printf("Il numero %d è maggiore di %d !\n", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("Il numero %d è maggiore di %d !\n", num2, num1);
    }
    else
    {
        printf("I numeri %d e %d hanno lo stesso valore!\n", num1, num2);
    }
}