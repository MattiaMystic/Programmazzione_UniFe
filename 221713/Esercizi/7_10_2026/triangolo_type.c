#include <stdio.h>

int main(){
    int a,b,c;
    printf("Inserisci i lati del triangolo! \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        printf("Il triangolo è equilatero!\n");
    }else if((a==b && a!=c) || (b==c && b!=a) || (c==a && c!=b) ){
        printf("Il triangolo è isoscele!\n");
    }else{
        printf("Il triangolo è scaleno!\n");
    }
    return 0;
}