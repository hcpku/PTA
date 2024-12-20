#include<stdio.h>

int sum = 0;
int k = 0;
void com(int x, int i, int y) {
    for (; i <= x; i++) {
        if (x % i == 0) {
            y++;
        }
    }
    if (y == 1) {
        k++;
    }
}

void dfs(int i, int n, int cnt, int h, int g) {
    if ( g == 3 ) {
        sum++;
        return;
    }
    if( cnt==1 ){
        if( h<n ){
            com(h, 2, 0);
        }
    }
    if( cnt==2 ){
        return;
    }
    for (; i <= n; i++) {
        com( i, 2 ,0);
        if (cnt == 0) {
            h = i;
        }
        dfs(i + 1, n, cnt + 1, h + i + 1, k);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    dfs(2, n, 0, 0, 0);
    printf("%d", sum);
}