#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    int aprovados_chamada[N];
    int recuperacao_chamada[N];
    int reprovados_chamada[N];

    float aprovados_nota[N];
    float recuperacao_nota[N];
    float reprovados_nota[N];

    int quant_aprovados = 0;
    int quant_recuperacao = 0;
    int quant_reprovados = 0;
    
    int entrada[N];

    for(int i =0; i < N; i++){

        int chamada;
        float nota;

        scanf("%d - %f", &chamada, &nota);

        if(nota >= 7.0){
            aprovados_nota[quant_aprovados] = nota;
            aprovados_chamada[quant_aprovados] = chamada;
            quant_aprovados++;
        }
        else if(nota >= 5.0 && nota < 7.0){
            recuperacao_nota[quant_recuperacao] = nota;
            recuperacao_chamada[quant_recuperacao] = chamada;
            quant_recuperacao++;
        }
        else{
            reprovados_nota[quant_reprovados] = nota;
            reprovados_chamada[quant_reprovados] = chamada;
            quant_reprovados++;
        }
    }
    
    printf("Aprovados:");
    for(int i =0; i < quant_aprovados; i++){
        printf(" %d (%.1f)", aprovados_chamada[i], aprovados_nota[i]);
        if(i < quant_aprovados - 1){
            printf(",");
        }
    }

    printf("\n");

    printf("Recuperação:");
    for(int i =0; i < quant_recuperacao; i++){
        printf(" %d (%.1f)", recuperacao_chamada[i], recuperacao_nota[i]);
        if(i < quant_recuperacao- 1){
            printf(",");
        }
    }

    printf("\n");

    printf("Reprovados:");
    for(int i =0; i < quant_reprovados; i++){
        printf(" %d (%.1f)", reprovados_chamada[i], reprovados_nota[i]);
        if(i < quant_reprovados - 1){
            printf(",");
        }
    }

    return 0;
}