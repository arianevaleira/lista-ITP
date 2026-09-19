#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
   
    char original[100];
    scanf("%s", &original);


    int tamanho = strlen(original);

    char invertido[tamanho + 1];
    int numero = atoi(original);

    for(int i = 0; i < tamanho; i++){
        invertido[i] = original[tamanho - 1 - i];
    }

    invertido[tamanho] = '\0';

    if(strcmp(original, invertido) == 0 && numero % 2 == 0){
        printf("%d é Palíndromo e par\n", numero);
    }
    else if(strcmp(original, invertido) == 0 && numero % 2 != 0){
        printf("%d é Palíndromo e impar.\n", numero);
    } 
    else if(strcmp(original, invertido) != 0 && numero % 2 != 0){
        printf("%d não é Palíndromo e impar.\n",numero);
    } 
    else if(strcmp(original, invertido) != 0 && numero % 2 == 0){
        printf("%d não é Palíndromo e par.\n",numero);
    } 

    return 0;
}