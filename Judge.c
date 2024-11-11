#include<stdio.h>

int main() {
    int a, n, k;
    int x[5000];
    scanf("%d %d %d", &a, &n, &k);
    int i = 0;
    for (; a / n > 0; a = a / n) {
        x[i] = a % n;
        i++;
    }
    printf("%d\n", x[k]);
}