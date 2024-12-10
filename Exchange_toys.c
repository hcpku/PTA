#include <stdio.h>

int max = 0;

void com(int cnt) {
    if (cnt >= max) {
        max = cnt;
        return;
    } else {
        max = max;
        return;
    }
}

void dfs(int a[101], int m, int n, int cnt, int i, int z) {
    if (m <= 0 || z > n) {
        return;
    }
    for (; i <= n; i++) {
        dfs(a, m - a[i], n, cnt + 1, i + 1, z + 1);
        if (m == a[n]) {
            cnt++;
        }
        com(cnt);
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
    printf("%d", max);
}