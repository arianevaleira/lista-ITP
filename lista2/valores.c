#include <stdio.h>

int main(){
    int quant=0;
    float valor;
    float aux;

    int quant_total = 0;
    float valor_total = 0;

    while(1){
        scanf(" %d %f", &quant, &valor);
        
        if(quant == -1){
            break;
        }

        aux = valor * quant;
        valor_total =  aux + valor_total;
        quant_total = quant + quant_total;
    }
    printf("%d %.2f\n", quant_total, valor_total);

    return 0;
}