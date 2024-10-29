#include<stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    int x;
    int h = 1;
    int y = 0;
    int q = 0;
    for (; h < 10; h++) {
        long long sum = h;
        q++;
        if (q <= 9) {
            printf("%d\n", q);
            y++;
        }
        for (x = h + 1;; x++) {
            sum = sum * 10 + x;
            if (sum <= n && x < 10) {
                y++;
                printf("%lld\n", sum);
            }
            if (sum > n) {
                break;
            }
        }
    }
    printf("%d", y);
}