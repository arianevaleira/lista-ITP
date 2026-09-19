#include <stdio.h>

int modulo(int num){
    if(num < 0){
        num = num * -1;
    }
    return num;
}

int soma(int numero){
    int divisores_numero = 0;

    for(int i = 1; i < numero; i++){
        if((numero % i) == 0){
           divisores_numero = divisores_numero + i;
        }
        else{
            continue;
        }
    }

    return divisores_numero;
}


void colegas(int soma_a, int soma_b, int a, int b){

    int resultado_a = soma_a - b;
    int resultado_b = soma_b - a;

    if(modulo(resultado_a) <=2 && modulo(resultado_b) <=2){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
}

int main(){
    
    int a,b;

    scanf("%d %d",&a,&b);

    int soma_a = soma(a);
    int soma_b = soma(b);
    
    colegas(soma_a, soma_b, a, b);
    

    return 0;
}