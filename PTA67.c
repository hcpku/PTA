#include<stdio.h>

int main() {
    int m, n;
    int sum = 0;
    scanf("%d %d", &m, &n);
    if (n >= 6 && m <= n && m > 1 && n <= 10000) {
        for (int i = m; i <= n; i++) {
            sum = 0;
            for (int x = 1; x < i; x++) {
                if ((i % x) == 0) {
                    sum += x;
                }
            }
            if (sum == i) {
                printf("%d = 1", i);
                for (int y = 2; y < i; y++) {
                    if ((i % y) == 0) {
                        printf(" + %d", y);
                    }
                    if (y == (i - 1)) {
                        printf("\n");
                    }
                }
            }
        }
    } else {
        printf("None");
    }
}