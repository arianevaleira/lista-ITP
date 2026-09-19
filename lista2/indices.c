#include <stdio.h>

int main(){

    int n;
    float auxiliar ;
    float numeros= 0.0;
    float resultado ;
    int cont = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%f", &auxiliar);
        if (auxiliar > 0)
        {
            numeros = numeros + auxiliar;
            cont ++;
        }
    }
    if(cont == 0){
        printf("A competicao nao possui dados historicos!");
    }
    else{
       resultado = numeros / cont;
       printf("%.2f \n", resultado);
    }

    return 0;
}