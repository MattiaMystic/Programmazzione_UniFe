#include <stdio.h>

int main()
{
    int num;
    printf("Inserissci il numero per verificare se è pari o dispari!\n ");
    scanf("%d", &num);
    if (num % 2)
    {
        printf("Il numero %d è dispari!\n", num);
    }
    else
    {
        printf("Il numero %d è pari!\n", num);
    }
    return 0;
}