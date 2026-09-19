#include <stdio.h>

int main() {
    int C, C1, C2;

    scanf("%d %d %d", &C, &C1, &C2);

    int D1;
    if (C1 > C) {
        D1 = C1 - C;
    } else {
        D1 = C - C1;
    }

    int D2;
    if (C2 > C) {
        D2 = C2 - C;
    } else {
        D2 = C - C2;
    }


    if(C > C1 && C > C2){
        printf("C\n");
    }
    else if (C < C1 && C < C2){
        printf("C\n");
    }

    else if(D1 < D2) {
        if (C1 > C) {
            printf("F\n");
        } else {
            printf("A\n");
        }
    } else if (D2 < D1) {
        if (C2 > C) {
            printf("F\n");
        } else {
            printf("A\n");
        }
    } else if (D1 == D2) {
        printf("C\n");
    }

    return 0;
}