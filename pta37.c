#include<stdio.h>
#include<math.h>

int main() {
    int n, i, a = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        a = a + pow(2, i);
    }
    printf("result = %d", a);
}