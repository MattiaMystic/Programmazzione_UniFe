#include <stdio.h>

int main()
{
    int num;
    printf("Inserisci un numero positivo! \n");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Il numero %d è positivo! \n", num);
    }
    else if (num == 0)
    {
        printf("Il numero %d è nullo o pari a 0! \n", num);
    }
    else
    {
        printf("Il numero %d è negativo!\n", num);
    }

    return 0;
}