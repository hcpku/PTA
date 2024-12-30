#include<stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%d", &n);
    int t = n;
    int m = 1;
    for (; n >= 10; m++) {
        n /= 10;
    }
    int x = 0;
    int h = 1;
    for (; h < 10; h++) {
        int sum = h;
        int g = h;
        for (; x <= m; x++) {
            sum = sum * 10;
            if (sum <= t) {
                g++;
                printf("%d\n", sum);
            } else {
                break;
            }
        }
    }

}