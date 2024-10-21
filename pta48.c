#include<stdio.h>

int main() {
    int a, b;
    char c;
    double summ, sum;
    scanf("%d %d %c", &a, &b, &c);
    if (b == 90) {
        summ = a * 6.95;
    }
    if (b == 93) {
        summ = a * 7.44;
    }
    if (b == 97) {
        summ = a * 7.93;
    }
    if (c == 'm') {
        sum = summ * 0.95;
    }
    if (c == 'e') {
        sum = summ * 0.97;
    }
    printf("%.2f", sum);
}