#include <stdio.h> 

int main(){

    int vetorB[15];
    int vetorC[15];
    int vetorD[15];
    int vetorE[15];

    int C = 0;
    int D = 0;
    int E = 0;

    for(int i=0; i < 15; i++){
        scanf("%d", &vetorB[i]);
    }
 
    for(int i = 0; i < 15; i++){

        if(vetorB[i] % 2 == 0){
            vetorC[C] = vetorB[i];
            C++;
        }

        if(vetorB[i] % 3 == 0){
            vetorD[D] = vetorB[i];
            D++;
        }

        if(vetorB[i] % 2 != 0 && vetorB[i] % 3 != 0){
            vetorE[E] = vetorB[i];
            E++;
        }
    }
    
    printf("B = [");
    for(int i = 0; i < C; i++){
        printf("%d", vetorC[i]);
        if(i < C - 1) printf(", ");
    }
    printf("]\n");

    
    printf("C = [");
    for(int i = 0; i < D; i++){
        printf("%d", vetorD[i]);
        if(i < D - 1) printf(", ");
    }
    printf("]\n");

    printf("D = [");
    for(int i = 0; i < E; i++){
        printf("%d", vetorE[i]);
        if(i < E - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}

