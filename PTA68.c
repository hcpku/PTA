#include<stdio.h>

int main() {
    long N;
    scanf("%ld", &N);
    long x = 1, y;
    int h = 0;
    for (; h == 0; x++) {
        y = N - x;
        for (long m = 2; m <= x; m++) {
            if ((x % m) == 0 && m != x) {
                break;
            }
            if ((x % m) == 0 && m == x) {
                for (long n = 2; n <= y; n++) {
                    if ((y % n) == 0 && n != y) {
                        break;
                    }
                    if ((y % n) == 0 && n == y) {
                        printf("%ld = %ld + %ld", N, x, y);
                        h = 1;
                    }
                }
            }
        }
    }
}