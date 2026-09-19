#include <stdio.h>

void level(int valor){
    if(valor < 10){
        printf("Level 1\n");
    }
    else if(valor >= 10 && valor <20){
        printf("Level 2\n");
    }
    else if(valor >= 20){
        printf("Level 3\n");
    }

}

int main(){
    
    int n;
    int maior;
    scanf("%d", &n);

    for(int i=0; i < n; i++){
        int nivel;
        scanf("%d", &nivel);

        if(i == 0 || nivel > maior){
            maior = nivel;
        }
    }

    level(maior);

    return 0;
}