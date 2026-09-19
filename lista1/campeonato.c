#include <stdio.h>

int main(){
    int quant_h;
    int nivel;
    int rival;
   
    scanf(" %d %d %d", &quant_h, &nivel, &rival);


    if(rival == 1){
       if (quant_h == 0){
          printf("Melhor chamar Saitama!\n");
       }
       else if(nivel >= 2 || (nivel == 1 && quant_h >=3)){
            printf("Heróis vencerão!\n");
        }
        else{
            printf("Melhor chamar Saitama!\n");
        }
    }
 
    else if(rival == 2){
        if(nivel >= 3 || (nivel == 2 && quant_h >=3)){
            printf("Heróis vencerão!\n");
        }
        else{
            printf("Melhor chamar Saitama!\n");
        }
    }

    else if(rival == 3){
        if(nivel >= 4 || (nivel == 3 && quant_h >=3)){
            printf("Heróis vencerão!\n");
        }
        else{
            printf("Melhor chamar Saitama!\n");
        }
    }

    else if(rival == 4){
        if(quant_h == 0){
           printf("Melhor chamar Saitama!\n");
        }
        else if(nivel == 5 || (nivel == 4 && quant_h >=3)){
            printf("Heróis vencerão!\n");
        }
        else{
            printf("Melhor chamar Saitama!\n");
        }
    }

   else if(rival == 5){
        if(quant_h == 0){
           printf("Melhor chamar Saitama!\n");
        }
        else if(nivel == 5){
            printf("Heróis vencerão!\n");
        }
        else{
            printf("Melhor chamar Saitama!\n");
        }
    }
}