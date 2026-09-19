#include <stdio.h>

int main(){
   
    int N;
    scanf("%d", &N);

    int vetor[N];
    int C = 0;
    int D = 0;

    for(int i=0; i < N; i++){
        scanf("%d", &vetor[i]);
    }
     
    
    for(int i=1; i < N; i++){
        int aux = vetor[i-1];
        if(vetor[i] > aux || vetor[i] == aux){
            C++;
        }
        else{
            D++;
        }
    }

    if(D > 0){
        printf("Vetor nao esta ordenado");
    }
    if(C == (N-1)){
        printf("Vetor esta ordenado");
    }
    

    return 0;
}