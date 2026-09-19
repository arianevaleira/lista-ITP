#include <stdio.h>

void subtracao(int L, int C, int matriz1[L][C], int matriz2[L][C]){
        int matriz3[L][C];
        
        for(int i =0; i < L; i++){
            for(int j=0; j < C; j++){
                matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }  

        for(int i =0; i < L; i++){
            for(int j=0; j < C; j++){
                printf("%d ", matriz3[i][j]);
            }
            printf("\n");
        }
}

int main(){
    
    int N;
    scanf("%d", &N);

    int M;
    scanf("%d", &M);

    int matriz1[N][M];
    int matriz2[N][M];
  
    for(int i =0; i < N; i++){
        for(int j=0; j < M; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(int i =0; i < N; i++){
        for(int j=0; j < M; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }   

    subtracao(N, M, matriz1, matriz2);

    return 0;
}