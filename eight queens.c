#include<stdio.h>

int cnt = 0;

void qipan( int array[8][8],int x , int y){
    for( x=0; x<8; x++){
        for( y = 0; y<8; y++){
            printf("%d", array[x][y]);
        }
        printf("\n");
    }
    printf("\n");
}
void rec(int array[8][8], int depth) {
    if (depth == 8) {
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
    for (int m = 0; m < 8; m++) {
        array[depth][m] = 1;
        qipan(array,0,0);
        rec(array, depth + 1);
        array[depth][m] = 0;
    }
}

int main() {
    int array[8][8];
    for (int m = 0; m < 8; m++) {
        for (int u = 0; u < 8; u++) {
            array[m][u] = 0;
        }
    }
    rec(array, 0);
    printf("%d", cnt);
    return 0;
}