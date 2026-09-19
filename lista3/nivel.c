#include <stdio.h> 

int mediana(int a, int b, int c){
    if( (a <= b && a >= c) || (a <= c && a >= b)){
        return a;
    }
    else if((b <= a && b >= c) || (b <= c && b >= a)){
        return b;
    }
    else{
        return c;
    }
}

int scoreFinal(int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8,int n9){

    int score1 = mediana(n1,n2,n3);
    int score2 = mediana(n4,n5,n6);
    int score3 = mediana(n7,n8,n9);

    return mediana(score1, score2, score3);

}

int main(){
    
    int a[9], b[9];

    for(int i=0; i < 9; i++){
        scanf("%d", &a[i]);
    }

    for(int j=0; j < 9; j++){
        scanf("%d", &b[j]);
    }

    int scoreA  =  scoreFinal(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]); 
    int scoreB  =  scoreFinal(b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8]); 

    if (scoreA > scoreB) {
        printf("A\n");
    } else if (scoreB > scoreA) {
        printf("B\n");
    } else {
        printf("empate\n");
    }

    return 0;
}