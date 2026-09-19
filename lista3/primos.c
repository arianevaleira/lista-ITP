#include <stdio.h>

int primo(int a){
    int divisores = 0;

    for (int i = 1; i <= a; i++){
        if (a % i == 0){
            divisores ++; 
        }
    }

    return divisores;
}

void primoGemeo(int num){
    int aux = num + 2;
    int valor = primo(aux);
     
    int valor1 = primo(num);

    if (valor1 > 2){
        printf("Numero nao forma par de gemeos\n");
    }
    
    else if(valor > 2){
        printf("Numero nao forma par de gemeos\n");
    }
    else if(num == 1){
        printf("Numero nao forma par de gemeos\n");
    }
    else if(valor <= 2){
        printf("Numero forma par de gemeos\n");
    }
}

int main(){

    int num; 
    scanf("%d", &num);
    primoGemeo(num);

    return 0;
}
