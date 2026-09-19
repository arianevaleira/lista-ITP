#include <stdio.h>

int main(){
    
    int aux;
    char c;

    scanf(" %d %c", &aux, &c);
    int n = aux - 1;

    for(int i =0; i < n; i++ ){
        for(int j=0; j < n; j++){

                if( i == j || i+j == n -1){
                    printf("%c", c);
                }
                else{
                    printf(" ");
                }
        }
        printf("\n");
    }
    return 0;
}