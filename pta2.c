#include "stdio.h"

int main() {
    int n = 0;
    scanf("%d", &n);
    int result = 1;
    for ( ; n > 0; n--) {
        result = result * n;
    }
    printf("%d", result);
    return 0;
}