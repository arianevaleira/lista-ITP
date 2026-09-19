#include <stdio.h> 

int main(){
    float temperatura;
    char val_temperatura;
    

    scanf(" %f %c", &temperatura , &val_temperatura);

    if(val_temperatura == 'C') {

        float C = temperatura;
        float F = (temperatura * 1.8) + 32 ;
        float K = temperatura + 273.15;

        printf("Celsius: %.2f\n", C);
        printf("Farenheit: %.2f\n", F);
        printf("Kelvin: %.2f\n", K);
    }

    if (val_temperatura == 'F'){

        float F = temperatura;
        float C = (F - 32) / 1.8; 
        float K = ((F - 32) / 1.8) + 273.15;

        printf("Celsius: %.2f\n", C);
        printf("Farenheit: %.2f\n", F);
        printf("Kelvin: %.2f\n", K);
    }
    
    if (val_temperatura == 'K'){ 

        float K = temperatura;
        float C = K - 273.15;
        float F = ((K - 273.15) * 1.8 ) + 32;

        printf("Celsius: %.2f\n", C);
        printf("Farenheit: %.2f\n", F);
        printf("Kelvin: %.2f\n", K);
    }
   
    return 0;
}