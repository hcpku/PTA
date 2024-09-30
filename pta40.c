#include<stdio.h>

int main() {
    int n, t;
    scanf("%d", &n);
    if (n < 0) {
        t = -1;
    }
    if (n == 0) {
        t = 0;
    }
    if (n > 0) {
        t = 1;
    }
    printf("sign(%d) = %d", n, t);
}