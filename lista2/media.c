#include <stdio.h>
#include <math.h>

int main() {
    double numeros[10];
    double soma_aritmetica = 0.0;
    double produto_geometrica = 1.0;
    double soma_harmonica = 0.0;

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numeros[i]);
        
        soma_aritmetica += numeros[i];
        produto_geometrica *= numeros[i];
        soma_harmonica += (1.0 / numeros[i]);
    }

    double media_aritmetica = soma_aritmetica / 10.0;
    double media_geometrica = pow(produto_geometrica, 1.0 / 10.0);
    double media_harmonica = 10.0 / soma_harmonica;


    double erro_harmonica = (media_harmonica - media_aritmetica) / media_aritmetica;
    double erro_geometrica = (media_geometrica - media_aritmetica) / media_aritmetica;
    double erro_medio = ((erro_harmonica + erro_geometrica) / 2.0) * 100.0;

    printf("Média aritmética é %.2f\n", media_aritmetica);
    printf("Média harmônica é %.2f\n", media_harmonica);
    printf("Média geométrica é %.2f\n", media_geometrica);
    printf("Erro médio é %.2f %%\n", erro_medio);

    return 0;
}