#include <stdio.h>

int min = 10000;

void com(int m) {
    if (min < m) {
        return;
    } else {
        min = m;
        return;
    }
}

void dfs(int a[101], int m, int n, int cnt, int i, int z) {
    if (m < 0 || z > n) {
        return;
    }
    for (; i <= n; i++) {
        dfs(a, m - a[i], n, cnt + 1, i + 1, z + 1);
        if (i == n && m == a[n]) {
            m = 0;
        } else if (i == n && m > a[n]) {
            com(m - a[n]);
        } else {
            com(m);
        }
    }
}

int main() {
    int m;
    int n;
    scanf("%d %d", &m, &n);
    int a[101];
    for (int i = 1; i <= n; i++) {

        scanf("%d", &a[i]);
    }
    dfs(a, m, n, 0, 1, 0);
    printf("%d", m - min);
}