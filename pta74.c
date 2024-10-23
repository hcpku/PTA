#include<stdio.h>

int main() {
    char a[10000];
    int n = 0;
    int i = 0;
    for (;; i++) {
        a[i] = getchar();
        if (a[i] == '\n') {
            break;
        }
    }
    for (int m = 0; m <= i; m++) {
        if (a[m] != '\n' && a[m] != ' ') {
            n++;
            break;
        }
    }
    if (n == 0) {
        printf("0 ");
    }
    if (n != 0) {
        int x = 0;
        int sum = 0;
        for (int m = 0; m <= i; m++) {
            if (a[m] != ' ' && a[m] != '\n') {
                sum++;
                x++;
            }
            if (a[m] == ' ' && x == 0) {
                continue;
            }
            if (a[m] == ' ' && x != 0 && a[m - 1] != ' ') {
                printf("%d ", sum);
                sum = 0;
            }
            if (a[m] == ' ' && x != 0 && a[m - 1] == ' ') {
                continue;
            }
            if (a[m] == '\n' && a[m - 1] != ' ') {
                printf("%d ", sum);
                break;
            }
            if (a[m] == '\n' && a[m - 1] == ' ') {
                break;
            }
        }
    }
}