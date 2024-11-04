#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int apples;
    int m;
    int i;
    int sum;
    for (apples = 2;; apples++) {
        int x = apples;
        sum = 1;
        for (; sum <= N && x >= 0; sum += 1) {
            i = x / N;
            if (i <= 0) {
                break;
            }
            m = x % N;
            x = x - i - 1;
            if (m == 1) {
                continue;
            } else {
                break;
            }
        }
        if (x >= 0 && m == 1 && i > 0) {
            printf("%d", apples);
            break;
        }
    }
}