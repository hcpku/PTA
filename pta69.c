#include<stdio.h>
#include<math.h>

int main() {
    int N;
    int sum = 0;
    scanf("%d", &N);
    int x = pow(10, N);
    for (int i = x / 10; i < x; i++) {
        int T = N;
        int n = i;
        sum = 0;
        for (int m = 0; T > 0; T--) {
            m = n % 10;
            sum = sum + pow(m, N);
            n = (n - m) / 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
}