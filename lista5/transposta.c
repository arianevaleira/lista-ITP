#include <stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);

    int M;
    scanf("%d", &M);

    int matriz1[N][M];
    int matrizT[M][N];
    
    for(int i =0; i < N; i++){
        for(int j=0; j < M; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            matrizT[i][j]  = matriz1[j][i];
        }
    }

    printf("Transposta\n");
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
           printf("%d ", matrizT[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}