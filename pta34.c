#include<math.h>
#include <stdio.h>

int main() {
    int n, i, a;
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        a = pow(3, i);
        printf("pow(3,%d) = %d\n", i, a);
    }
}