#include<stdio.h>

int main() {
    int M, N, number, x, y, z;
    scanf("%d %d", &M, &N);
    if (M < N && M >= 100 && N <= 999) {
        for (number = M; number <= N; number++) {
            x = number % 10;
            y = ((number - x) / 10) % 10;
            z = (number - 10 * y - x) / 100;
            if (x * x * x + y * y * y + z * z * z == number) {
                printf("%d\n", number);
            }
        }
    } else {
        printf("Invalid Value.");
    }
}