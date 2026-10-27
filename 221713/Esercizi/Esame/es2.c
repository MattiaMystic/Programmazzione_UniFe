#include <stdio.h>
int palindromo(int n)
{
    int o, r, t, i;
    o = n;
    r = 0;
    while (n != 0)
    {
        t = 0;
        i = 0;
        while (i < 10)
        {
            t += r;
            i++;
        }
        r = t + (n % 10);
        n /= 10;
    }
    if (r == o)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n, somma = 0;
    printf("Inserisci un numero per vedere tutti i suoi numeri palindromi <= a lui ! \n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (!palindromo(i))
        {
            somma += i;
        }
    }
    printf("%d", somma);
}
