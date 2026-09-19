#include <stdio.h>

int main() {
    int N[8];
    int M[8];
    int i;

    for (i = 0; i < 8; i++) {
        scanf("%d", &N[i]);
    }

    for (i = 0; i < 8; i++) {
        M[i] = N[7 - i];
    }


    for (i = 0; i < 8; i++) {
        printf("%d", M[i]);
        if (i < 7) {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}