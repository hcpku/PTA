#include <stdio.h>

int cnt = 0;

void rec(int a[100], int n, int m, int sum, int z, int y, int x) {
    if ( z >= 4) {
        if( sum==n ){
            cnt++;
        }
        return;
    }
    for (; x < m; x++) {
        sum += a[x];
        z++;
        rec(a, n, m, sum, z, y, x + 1);
        sum = sum - a[x];
        z--;
    }
}

int main() {
    int m, n;
    int z = 1;
    int i;
    int a[100];
    scanf("%d %d", &n, &m);
    for (int k = 0; k < 100; k++) {
        a[k] = 0;
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    rec(a, n, m, 0, z, 0, 0);
    printf("%d", cnt);

}