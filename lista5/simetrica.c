#include <stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);

    int cont =0;

    int matriz1[N][N];
    int matrizT[N][N];
    
    for(int i =0; i < N; i++){
        for(int j=0; j < N; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            matrizT[i][j]  = matriz1[j][i];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(matrizT[i][j]  != matriz1[i][j]){
                cont = cont +1;
            }
        }
    }

    if(cont > 0){
        printf("A matriz nao e simetrica");
    }
    else{
        printf("A matriz e simetrica");
    }
    
    return 0;
}