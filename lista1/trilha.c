#include <stdio.h>

int main(){

    int T;
    int S;
    scanf(" %d", &T);

    if(T>= 0 && T<5){
        printf("Iniciante\n");
    }

    if(5<=T && T<20){ 

        scanf(" %d", &S);

        if(S == 0){
            printf("Iniciante\n");
        }
        if(S == 1){
            printf("Intermediário\n");
        }
    }

    if(T>=20){ 
        scanf(" %d", &S);
        if(S==0){
            printf("Intermediário\n");
        }
        if (S==1){
           printf("Avançado\n");
        }  
    }

    return 0;
}