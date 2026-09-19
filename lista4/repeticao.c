#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int vetor[N];
    int vetorFinal[100];
    int repetido;
    int cont = 0;

    for(int i =0;i < N; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(int i=0; i < N; i++){
        repetido = 0; 
        for(int j = 0; j < cont; j++){
            if(vetor[i] == vetorFinal[j]){
                repetido =1;
                break;
            }
        }
        if(repetido == 0){
            vetorFinal[cont] = vetor[i];
            cont++;
        }
    }

    for(int i =0; i<cont; i++){
        printf("%d ", vetorFinal[i]);
    }

}