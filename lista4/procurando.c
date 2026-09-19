#include <stdio.h>
#include <string.h>

int buscar(char vetor[] ,char palavra[]){
    int encontrada = strcmp(vetor, palavra);    
    return encontrada;
}

int main(){
   
    char frutas[8][50];
    char palavra[50];
    int resposta;

    for(int i =0; i < 8; i++){
        scanf("%s", &frutas[i]);
    }
     
    scanf("%s", &palavra);


    for(int i=0; i < 8; i++){

        resposta = buscar(frutas[i], palavra);

        if(resposta == 0){
            printf("encontrei\n");
        }
        else if(resposta != 0){
            printf("não\n");
        }
    }


    return 0;
}