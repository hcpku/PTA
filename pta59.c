#include<stdio.h>

int main() {
    int rabbit[10000];
    int months[10000];
    int i, month = 3, n, N;
    for (i = 0; i < 10000; i++) {
        rabbit[i] = 0;
        months[i] = 0;
        rabbit[0] = 1;
    }
    scanf("%d", &N);
    if (N != 1) {
        for (int rabbits = 0; rabbits < N; month++) {
            if (month <= 5) {
                if (month == 3) {
                    months[0] = 3;
                    months[1] = 0;
                }
                if (month == 4) {
                    months[0] = 4;
                    months[1] = 1;
                    months[2] = 0;
                }
                if (month == 5) {
                    months[0] = 5;
                    months[1] = 2;
                    months[2] = 1;
                    months[3] = 0;
                }

            } else {
                for (n = 0; n <= (month - 3); n++) {
                    months[n]++;
                    months[0] = 3;
                }
            }
            for (n = 0; n <= (month - 3); n++) {
                if (months[n] >= 3) {
                    rabbit[month - 3] += rabbit[n];
                }
            }
            rabbits += rabbit[month - 3];
        }
    } else {
        month = 2;
    }
    printf("%d", month - 1);
}