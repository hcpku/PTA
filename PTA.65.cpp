#include<stdio.h>
#include<math.h>

int main() {
    int number, a, i = 1, x;
    int m, n, t;
    scanf("%d", &number);
    t = number;
    x = number / 10;
    for (; x > 0; i++) {
        number = number / 10;
        x = number / 10;
    }
    number = t;
    for (m = number / 10; m >= 0; i--) {
        n = pow(10, (i - 1));
        m = number / 10;
        a = number / n;
        number = number - a * n;
        if (m != 0) {
            printf("%d ", a);
        } else {
            printf("%d ", a);
            break;
        }

    }
}