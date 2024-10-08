#include<stdio.h>
#include<math.h>

int main() {
    int N;
    long sum = 0;
    scanf("%d", &N);
    int x = pow(10, N);
    long a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = pow(i, N);
    }
    for (int i = x / 10; i < x; i++) {
        int T = N;
        int n = i;
        sum = 0;
        for (int m = 0; T > 0 && sum <= i; T--) {
            m = n % 10;
            sum = sum + a[m];//pow
            n = (n - m) / 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
}