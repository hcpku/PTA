#include<stdio.h>

int main() {
    int i, j;
    scanf("%d %d", &i, &j);
    int m = j % 4;
    if (m == 0) {
        printf("%d ", j / 4);
    } else {
        printf("%d ", (j / 4) + 1);
    }
    printf("%d", ((j % 4) - 1) * 10 + i);
}