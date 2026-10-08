#include <stdio.h>

void stampa_giorno(int stampa_s)
{

    if (stampa_s == 0)
    {
        printf("E' lunedì\n");
    }
    else if (stampa_s == 1)
    {
        printf("E' martedì\n");
    }
    else if (stampa_s == 2)
    {
        printf("E' mercoledì\n");
    }
    else if (stampa_s == 3)
    {
        printf("E' giovedì\n");
    }
    else if (stampa_s == 4)
    {
        printf("E' venerdì\n");
    }
    else if (stampa_s == 5)
    {
        printf("E' sabato\n");
    }
    else
    {
        printf("E' domenica\n");
    }
}

int main()
{
    int G, M, A, JD = 0, N0, N1, N2, N3, data_v = 0, giorno_s;
    do
    {
        printf("Inserisci il giorno che vuoi calcolare dal JD [1/1/4713 A.C.]\n");
        scanf("%d%d%d", &G, &M, &A);
        if (A >= 1 && M >= 1 && M <= 12 && G >= 1)
        {

            int giorni_massimi = 31;

            if (M == 4 || M == 6 || M == 9 || M == 10)
            {
                giorni_massimi = 30;
            }
            else if (M == 2)
            {
                // se è bisestile:
                if ((A % 4 == 0 && A % 100 != 0) || (A % 400 == 0))
                {
                    giorni_massimi = 29; // Bisestile ha 29 giorni a febbraio
                }
                else
                {
                    giorni_massimi = 28; // Anno normale a febbraio
                }
            }

            if (G <= giorni_massimi)
            {
                data_v = 1;
                printf("La data [%02d/%02d/%d] è VALIDA.\n", G, M, A);
                N0 = (M - 14) / 12;
                N1 = (1461 * (A + 4800 + N0)) / 4;
                N2 = (367 * (M - 2 - (12 * N0))) / 12;
                N3 = (3 * (A + 4900 + N0)) / 400;
                JD = N1 + N2 - N3 + G - 32075;
                printf("I giorni da [1/1/4713 A.C.] sono :%d\n", JD);
                giorno_s = JD % 7;
                stampa_giorno(giorno_s);
            }
            else
            {
                printf("La data %02d/%02d/%d NON è valida (giorno errato).\n", G, M, A);
            }
        }
        else
        {
            printf("La data NON è valida (mese o anno fuori dai limiti).\n");
        }
    } while (data_v == 0);

    return 0;
}