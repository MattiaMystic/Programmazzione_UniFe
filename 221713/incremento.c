#include <stdio.h>

int main()
{

    int a = 5, b, c;
    b = a++; // b=5 e poi a fa +1 e fa 6
    c = ++a; // c=6+1 e a fa +1
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
}