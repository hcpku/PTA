#include<stdio.h>

int main() {
    int N, i = 1;
    scanf("%d", &N);
    double n = 0.0, s = 1.0, p = 1.0;
    for (i = 1; i < (2 * N); i += 2) {
        n = n + (p * s) / i;
        s++;
        p = -p;
    }
    printf("%.3f", n);
}