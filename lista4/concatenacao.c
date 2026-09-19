#include <stdio.h> 

int main(){
    
    int N; 
    scanf("%d",&N);

    int vetorA[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &vetorA[i]);
    }
    

    int K; 
    scanf("%d",&K);

    int vetorB[K];

    for(int i = 0; i < K; i++){
        scanf("%d", &vetorB[i]);
    }

    int T = N + K;
    
    int resultante[T];

    for(int i=0; i < N; i++){
        resultante[i] = vetorA[i];
    }

    int j= N;

    for(int i=0; i < K; i++){
        resultante[j] = vetorB[i];
        j++;
    }

    for(int i =0; i<j; i++){
        printf("%d ", resultante[i]);
    }

    return 0; 
}