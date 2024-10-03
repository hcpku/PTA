#include<stdio.h>

int main() {
    int x;
    int sum = 0;
    scanf("%d", &x);
    while (x > 0) {

        if ((x % 2) == 1) {
            sum += x;
        }
        scanf("%d", &x);
    }
    printf("%d", sum);
}