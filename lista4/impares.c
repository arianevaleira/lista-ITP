#include <stdio.h>

int main(){

    int vetor[20];
    int vetorPar[20];
    int vetorImpar[20];

    int contP =0;
    int contI =0;


    for(int i =0; i < 20; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(int i =0; i < 20;i++){
        if(vetor[i] % 2 == 0){
            vetorPar[contP] = vetor[i];
            contP++;
        }
        else if((vetor[i] % 2) !=  0){
            vetorImpar[contI] = vetor[i];
            contI++;
        }
    }

    printf("Pares: ");
    for(int i =0; i < contP; i++){
        printf("%d", vetorPar[i]);
        if(i < contP - 1){
            printf(",");
        }
    }
    printf("\n");

    printf("Impares: ");
    for(int i =0; i < contI; i++){
        printf("%d", vetorImpar[i]);
        if(i < contI - 1){
            printf(",");
        }
    }
    printf("\n");
}