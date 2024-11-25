#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[900];
    int i;
    int sum = 0;
    char b[100][19] ;
    for( int e=0; e<19; e++){
        for( int r=0; r<100; r++){
            b[r][e] = ' ';
        }
    }
    int c[10] = {0};
    for (i = 0;; i++) {
        a[i] = getchar();
        if( a[i]==' '){
            sum++;
        }
        if (a[i] == '\n' && sum == n-1) {
            break;
        }
        if (a[i] == '1') {
            c[1]++;
        }
        if (a[i] == '2') {
            c[2]++;
        }
        if (a[i] == '3') {
            c[3]++;
        }
        if (a[i] == '4') {
            c[4]++;
        }
        if (a[i] == '5') {
            c[5]++;
        }
        if (a[i] == '6') {
            c[6]++;
        }
        if (a[i] == '7') {
            c[7]++;
        }
        if (a[i] == '8') {
            c[8]++;
        }
        if (a[i] == '9') {
            c[9]++;
        }
        if (a[i] == '0') {
            c[0]++;
        }
    }
        int max = 0;
        for (int k = 0; k < 10; k++) {
            if (c[k] > max) {
                max = c[k];
            }
        }
        int y = 0;
        i = 0;
        for (int x = 0; x < 19; x = x + 2) {
            y = max - c[i];
            for( ; y < max; y++){
                b[y][x] = '-';
            }
            i++;
        }
        for( int x = 0; x<max; x++){
            for(  y = 0; y<19; y++){
                printf("%c", b[x][y]);
            }
                printf("\n");
        }
    printf("0 1 2 3 4 5 6 7 8 9");
    }