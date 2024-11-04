#include <stdio.h>


int main() {
    int n;
    int z;
    int sum = 0;
    int x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        sum = 0;
        for (int m = 1; m <= x; m++) {
            z = x / m;
            if (z == y) {
                sum++;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}