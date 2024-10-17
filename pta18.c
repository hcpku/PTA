#include <stdio.h>

int main() {
    int F = 150;
    scanf("%d", &F);
    if (F >= 32) {
        int C = 5 * (F - 32) / 9;
        printf("Celsius = %d", C);
    }
    if (F < 32) {
        int C = -5 * (32 - F) / 9;
        printf("Celsius = %d", C);
    }
    return 0;
}