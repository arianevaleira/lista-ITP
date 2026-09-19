#include <stdio.h>

int main(){

    int entrada;
    scanf("%d", &entrada);
    
    if(entrada <= 0){
        printf("Você entrou com %d, tente de novo na próxima", entrada);
    }
    else{
        int cont = 1;
        for(int i = 1; i <= entrada; i++){
            for(int j = 1; j <= i; j++){
                if(j == i){
                    if(cont < 10){
                        printf("%2d", cont);
                    }else{
                        printf("%d", cont);
                    }
                }
                else{
                    if(cont < 10){
                        printf("%2d ", cont);
                    }else{
                        printf("%d ", cont);
                    }
                }
                cont++;
            }
            printf("\n");
        }
    }
    return 0;
}