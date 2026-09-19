#include <stdio.h>

float calculaMedia(char tipo, float n1, float n2, float n3){
    float media;
     
    if(tipo == 'A'){

        float media_aritmetrica = (n1 + n2 + n3) / 3;
        return media_aritmetrica;
    }
    else if (tipo == 'P'){

        float media_ponderada= ((n1 * 4) + (n2 * 5) + (n3 * 6)) / 15;
        return media_ponderada;
    }
    
}

int main(){

    char tipo;
    float n1, n2, n3, media; 
    
    scanf("%c", &tipo);
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media = calculaMedia(tipo, n1, n2, n3);

    printf("Média %.2f\n", media);
}