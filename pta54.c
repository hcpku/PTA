#include<stdio.h>

int main() {
    int M, N, x, y, n = 0, sum = 0;
    int number;
    scanf("%d %d", &M, &N);
    number = M;
    for (number = M; number <= N; number++) {
        y = 0;
        for (x = 2; x <= number; x++) {
            if ((number % x) == 0) {
                y++;
            }
        }
        if (y == 1) {
            n++;
            sum += number;
        }
    }
    printf("%d %d", n, sum);
}