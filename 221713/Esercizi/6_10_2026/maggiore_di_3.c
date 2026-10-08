#include <stdio.h>

int main()
{

    /*int a, b, c;
    printf("Inserisci tre numeri da confrontare e trovare il rispettivo maggiore! \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b)
    {

        if (a >= c)
        {
            printf("A è il maggiore ed è %d", a);
        }
        else
        {
            printf("C è il maggiore ed è %d", c);
        }
    }
    else if (b >= c)
    {
        printf("B è il maggiore ed è %d", b);
    }
    else
    {
        printf("C è il maggiore ed è %d", c);
    }*/
    /*
    if (a >= b && a >= c)
    {
        printf("A è il maggiore ed è %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("B è il maggiore ed è %d", b);
    }
    else
    {
        printf("C è il maggiore ed è %d", c);
    }
    */

    //con 2 var
    int a, b;
    printf("Inserisci tre numeri da confrontare e trovare il rispettivo maggiore! \n");
    scanf("%d%d", &a, &b);
    if (a >= b)
    {
        printf("Inserisci il 3 numero:!\n");
        scanf("%d",&b);
        if(a>=b){
            printf("Il maggiore è :%d\n",a);
        }else{
            printf("Il maggiore è : %d\n",b);
        }

    }else{
         printf("Inserisci il 3 numero:!\n");
        scanf("%d",&a);
        if(b>=a){
            printf("Il maggiore è :%d\n",b);
        }else{
            printf("Il maggiore è :%d\n",a);
        }
        

    }
    return 0;
}