#include <stdio.h>

int sommaNum(int num1, int num2)
{
    return num1 + num2;
}
float division(int n1, int n2)
{
    return (float)n1 / n2;
}
int moltiplication(int n1, int n2)
{
    return n1 * n2;
}

int main()
{
    int num1, num2, somma = 0, moltiplicazione = 0;
    float divisione = 0;
    int uscita = 0;
    printf("Inserisci il primo numero! \n");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero! \n");
    scanf("%d", &num2);
    do
    {

        int scelta;
        printf("Inserisci un numero: \n[1] -> fai la somma\n[2]-> fai la divisione\n[3]-> fai la moltiplicazione\n[n/4]-> esci\n");
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 1:
            somma = sommaNum(num1, num2);
            printf("LA SOMMA E': %d \n", somma);
            uscita = 1;
            break;

        case 2:
            divisione = division(num1, num2);
            printf("LA DIVISIONE E': %.2f \n", divisione);
            uscita = 1;
            break;
        case 3:
            moltiplicazione = moltiplication(num1, num2);
            printf("LA MOLTIPLICAZIONE E': %d \n", moltiplicazione);
            uscita = 1;
            break;
        default:
            printf("Sei uscito dal programma:) \n");
            uscita = 0;
            break;
        }

    } while (uscita == 1);
    return 0;
}
