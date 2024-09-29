#include<stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int x, y, min;
    scanf("%d", &x);
    min = x;
    for (; number >= 0; number--) {
        y = min;
        scanf("%d", &x);
        if (x > y) {
            min = y;
        } else {
            min = x;
        }
    }
    printf("min = %d", min);
}