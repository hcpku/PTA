#include<stdio.h>

int main() {
    int N, x, i, n = 1, sum = 0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        for (x = 1; x <= i; x++) {
            n = n * x;
        }
        x = 1;
        sum = sum + n;
        n = 1;
    }
    printf("%d", sum);
    return 0;
}