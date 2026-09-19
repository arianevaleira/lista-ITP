#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int M;
    scanf("%d", &M);

    int matriz1[N][M];

    for(int i =0; i < N; i++){
        for(int j=0; j < M; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int cont = 0;

    for(int i =0; i < N; i++){
        for(int j=0; j < M; j++){
            if(matriz1[i][j] == x){
               cont += 1;
            }
        }
    }    

    if(cont > 0){
        printf("Matriz tem elemento %d\n", x);
    }
    else{
        printf("Matriz não tem elemento %d\n", x);
    }
}