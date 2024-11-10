#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    char a[600];
    int i;
    int y = 0;
    int x;
    int h = 0;
    int sum = 0;
    for (i = 0; i < 500; i++) {
        a[i] = getchar();
        if (a[i] == '\n') {
            h++;
        }
        if (h == 2) {
            break;
        }
    }
    y = i;
    int m = (i - n) / n;
    int cnt = 0;
    for (i = 1;; i++) {
        if (cnt != n - 1) {
            if (a[i] != a[i + m + 1] && a[i] != ' ' && cnt != n - 1) {
                sum++;
            }
            if (a[i] == ' ' && sum == 1) {
                cnt++;
                sum = 0;
                continue;
            }
            if (a[i] == ' ' && sum != 1) {
                printf("no");
                break;
            }
        }
        if (cnt == n - 1) {
            for (x = 1; x <= m; x++) {
                if (a[x] != a[y - m + x - 1]) {
                    sum++;
                }
            }
            if (sum == 1) {
                cnt++;
                break;
            } else {
                break;
            }
        }
    }
    if (cnt == n) {
        printf("yes");
    }
    if (cnt == n - 1) {
        printf("no");
    }
}