#include <stdio.h>

int main(){
    
    int p;
    int valor;

    scanf(" %d %d", &p, &valor);

    if(p == 1){
        int quant = 12;
        if(valor == quant){
            printf("Deu certim!\n");
        } else if (valor > quant)
        {
            int x = valor - quant;
            printf("Troco = %d reais\n", x);
        }
        else{
            int x = quant - valor;
            printf("Saldo insuficiente! Falta %d reais\n", x);
        }
    }

    else if(p == 2){
        int quant = 23;
        if(valor == quant){
            printf("Deu certim!\n");
        } else if (valor > quant)
        {
            int x = valor - quant;
            printf("Troco = %d reais\n", x);
        }
        else{
            int x = quant - valor;
            printf("Saldo insuficiente! Falta %d reais\n", x);
        }
    }
    
    else if(p == 3){
        int quant = 31;
        if(valor == quant){
            printf("Deu certim!\n");
        } else if (valor > quant)
        {
            int x = valor - quant;
            printf("Troco = %d reais\n", x);
        }
        else{
            int x = quant - valor;
            printf("Saldo insuficiente! Falta %d reais\n", x);
        }
    }


    else if(p == 4){
        int quant = 28;
        if(valor == quant){
            printf("Deu certim!\n");
        } else if (valor > quant)
        {
            int x = valor - quant;
            printf("Troco = %d reais\n", x);
        }
        else{
            int x = quant - valor;
            printf("Saldo insuficiente! Falta %d reais\n", x);
        }
    }

    
    else if(p == 5){
        int quant = 15;
        if(valor == quant){
            printf("Deu certim!\n");
        } else if (valor > quant)
        {
            int x = valor - quant;
            printf("Troco = %d reais\n", x);
        }
        else{
            int x = quant - valor;
            printf("Saldo insuficiente! Falta %d reais\n", x);
        }
    }

    return 0;
}