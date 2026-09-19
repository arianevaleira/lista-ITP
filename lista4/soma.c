#include <stdio.h>

int main(){
    
    int vetorA[5];
    int vetorB[5];
    int resultante[5];

    
    for(int i=0; i < 5; i++){
       scanf("%d", &vetorA[i]);
    }

    for(int i=0; i < 5; i++){
       scanf("%d", &vetorB[i]);
    }

    for(int i=0; i < 5; i++){
       resultante[i] = vetorA[i] + vetorB[i]; 
       printf("%d ", resultante[i]);
    }
    
    return 0;
}