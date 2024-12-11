#include<stdio.h>

int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n - 2; i++) {
        for (int x = i + 1; x <= n - 1; x++) {
            if ((i * i + x * x) == (x + 1) * (x + 1)) {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
}