#include <stdio.h>
#include <math.h>

int main() {
    double tempo_limite, tempo;
    int aptos = 0, series;

    if (scanf("%lf", &tempo_limite) != 1) return 0;

    while (scanf("%lf", &tempo) == 1 && tempo != -1.0) {
        if (tempo <= tempo_limite) {
            aptos++;
        }
    }

    series = (aptos + 7) / 8;

    printf("%d %d\n", aptos, series);

    return 0;
}