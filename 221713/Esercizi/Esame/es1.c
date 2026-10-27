#include <stdio.h>

float valAss(float x)
{
    if (x < 0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}

float radiceN(int N, float a)
{
    float x = 1.0, p;
    do
    {
        p = 1.0;
        int i = 0;
        do
        {
            p *= x;
            i++;
        } while (i < (N - 1));
        x = ((N - 1) * p * x + a) / (N * p);
    } while ((valAss(p * x - a) / a) > 1e-5);
    return x;
}

int main()
{
    int N;
    float a;
    printf("Inserisci un numero reale y e un numero intero positivo M \n");
     scanf("%f %d", &a, &N); 
    for (int k = 2; k <= N; k++)
    {
        printf("%f\n", radiceN(k, a));
    }
    return 0;
}
