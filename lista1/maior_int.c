#include <stdio.h>

int main(){
     
    int a;
    int b;
    int c;
    int d;

    scanf(" %d %d %d %d", &a, &b,&c,&d);

    int maior = a;

    if(a >= maior){
        maior = a;
    }
    if(b >= maior){
        maior = b;
    }
    if(c>=maior){
       maior = c;
    }
    if (d>=maior){
        maior=d;
    } 
    
    printf("Maior: %d\n", maior);

    return 0;
}