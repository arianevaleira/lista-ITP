#include <stdio.h>

void velocidade(int x, int v1, int v2){
    
    if(v1 <= v2){
        printf("impossivel\n");
    }
    else if(v1 > v2){
        float deltaT = x / (v1 - v2);
        printf("%.0fs\n", deltaT);
    }

}

int main(){
    int x, v1, v2;

    scanf("%d", &x);
    scanf("%d", &v1);
    scanf("%d", &v2);

    velocidade(x, v1, v2);

    return 0;
}