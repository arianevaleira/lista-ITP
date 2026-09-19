#include <stdio.h>

int MDC(int x, int y){
    if ( y == 0 ){
        return x;
    }
    if ( x == 0 ){
        return y;
    }
    else if (y != 0 && x != 0){
        int aux;
        while (y != 0){
            aux = x;
            x = y;
            y = aux % y;   
        }
       return x;

    }

    
}

int main(){
    int x, y; 

    scanf("%d",&x);
    scanf("%d",&y);
    int num = MDC(x, y);
    printf("MDC(%d , %d) = %d\n",x,y,num);
}