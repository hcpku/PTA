#include<stdio.h>

int main() {
    int N, i, y;
    int x;
    int count[3];
    scanf("%d", &N);
    for (i = 0; i < 3; i++) {
        count[i] = 0;
    }
    for (N = N; N > 0; N--) {
        scanf("%d", &x);
        if (x >= 85) {
            count[0]++;
        }
        if (x >= 60 && x < 85) {
            count[1]++;
        }
        if (x < 60) {
            count[2]++;
        }
    }
    for (i = 0; i < 3; i++) {
        printf("%d", count[i]);
        if (i < 2) {
            printf(" ");
        }
    }
}
