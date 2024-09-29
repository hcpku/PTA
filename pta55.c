#include<stdio.h>

int main() {
    int N;
    double sum = 0.0, x, y, m, t, n;
    scanf("%d", &N);
    m = 2;
    n = 1;
    for (N = N; N > 0; N--) {
        sum = 1.0 * sum + 1.0 * m / n;
        t = n;
        n = m;
        m = m + t;
    }
    printf("%.2f", sum);
}
