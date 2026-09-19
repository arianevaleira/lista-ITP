#include <stdio.h>

int diagonal(int N, int matriz[N][N]){

    int soma = 0;

    for(int i =0; i < N; i++){
        for(int j=0; j < N; j++){
            if(i == j){
                soma = soma + matriz[i][j];
            }
            if(i+j == N -1){
                soma = soma + matriz[i][j];
            }
        }
    }  
    
    return soma;
}

int main(){

    int N;

    scanf("%d", &N);
    int matriz[N][N];

    
    for(int i =0; i < N; i++){
        for(int j=0; j < N; j++){
            scanf("%d\n", &matriz[i][j]);
        }
    }

    int resultado = diagonal(N, matriz);
    printf("%d", resultado);

    return 0;
}