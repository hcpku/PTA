#include <stdio.h>

int rec(int a[1000], int i) {
    int x = i;
    if (a[i] != 0) {
        return a[i];
    }
    if (x == 1) {
        a[x] = 1;
        return a[x];
    }
    for (; x >= 1; x--) {
        if (i % x == 0 && i != x) {
            a[i] += rec(a, x);
        }
    }
    return a[i];
}

int main() {
    int n;
    int a[1000];
    int x;
    for (x = 0; x < 1000; x++) {
        a[x] = 0;
    }
    scanf("%d", &n);
    int y;
    y = rec(a, n);
    printf("%d", y);
}