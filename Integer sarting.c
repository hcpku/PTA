#include<stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    int sum = 0;
    long long a[100];
    for (i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    int h = i;
    int k = 0;
    int g = -1;
    int u = 1;
    long long b[100];
    for (int l = 0; l < n; l++) {
        for (i = 0; i < n; i++) {
            for (int m = 0; m < n; m++) {
                if (i == m || a[m] < 0) {
                    continue;
                }
                if (a[i] < a[m]) {
                    sum++;
                }
            }
            if (sum == h - u) {
                b[k] = a[i];
                a[i] = g;
                k++;
                g--;
                u++;
            }

            sum = 0;
        }
    }

    a[k - 1] = b[k - 1];
    long long f = 1;
    for (i = 1; (a[k - 1] / f) > 0; i++) {
        f = pow(10, i);
    }
    f = 1;
    int y = i - 1;
    for (int w = 0; w < n; w++) {
        for (i = 1; (b[w] / f) > 0; i++) {
            f = pow(10, i);
        }
        for (int e = 1; e <= y - i + 1; e++) {
            printf(" ");
        }
        printf("%lld\n", b[w]);
        f = 1;
    }
}