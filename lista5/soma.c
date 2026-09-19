#include <stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);

    int M;
    scanf("%d", &M);

    int matriz1[N][M];
    int matriz2[N][M];
    int matriz3[N][M];

    int cont = 0;

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
    
    for(int i =0; i < N; i++){
        for(int j=0; j < M; j++){
           matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }  

    printf("Resultado:\n"); 
    for(int i =0; i < N; i++){
        for(int j=0; j < M; j++){
           printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }


    for(int i =0; i < N; i++){
        for(int j=0; j < M; j++){
           if(i>j && matriz3[i][j] != 0){
              cont++;
           }
        }
    } 

    printf("Elementos não-nulos na região: %d", cont);
    
    return 0;
}