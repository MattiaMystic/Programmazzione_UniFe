#include <stdio.h>

int main()
{
    int a;
    a = 2;             // a vale 2
    printf("%d\n", a); // stamperà ovviamente 2
    a = 3;             // assegno un valore diverso ad a quindi sovrascrivo il 2 di prima con un 3
    printf("%d\n", a); // a ora vale 3
}