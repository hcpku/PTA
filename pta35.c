#include<math.h>
#include<stdio.h>

int main() {
    int N, i;
    double a, n = 0.0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        a = pow(i, 0.5);
        n = n + a;
    }
    printf("sum = %.2f", n);
}