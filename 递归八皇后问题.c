#include <stdio.h>

int cnt = 0;


void rec(int array[8][8], int depth) {
    if (depth == 8) {
        // 列
        for (int i = 0; i < 8; i++) {
            int sum = 0;
            for (int j = 0; j < 8; j++) {
                sum += array[j][i];
            }
            if (sum != 1) {
                return;
            }
        }
        for (int j = 0; j < 8; j++) {
            for (int i = 0; i < 8; i++) {
                int sum1 = 0, sum2 = 0;
                for (int m = j, n = i; m < 8 && n < 8; m++, n++) {
                    sum1 += array[m][n];
                }
                for (int m = j, n = i; m < 8 && n >= 0; m++, n--) {
                    sum2 += array[m][n];
                }
                if (sum1 > 1 || sum2 > 1) {
                    return;
                }
            }
        }
        cnt++;
        return;
    }
    for (int i = 0; i < 8; i++) {
        array[depth][i] = 1;
        rec(array, depth + 1);
        array[depth][i] = 0;
    }
}