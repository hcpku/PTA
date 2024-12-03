#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &m, &n);
    int x = 1;
    int y;
    int i;
    for (i = 1; x <= n; x++) {
        scanf("%d", &y);
        i = i + y;
        if (i > m) {
            i = i - m;
        }
    }
    printf("%d", i);

}