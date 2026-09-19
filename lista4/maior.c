#include <stdio.h>

int numeroMaior(int vetor[], int N){
    int maior = vetor[0]; 

    for(int i = 0; i < N; i++){

        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    return maior;
}

int main(){

    int N;
    scanf("%d",&N);

    int vetor[N];
    for(int i=0; i < N; i++){
        scanf("%d", &vetor[i]);
    }

    int maior = numeroMaior(vetor,N);
    printf("O maior é: %d\n", maior);

    return 0;
}