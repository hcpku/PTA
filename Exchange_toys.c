//#include <stdio.h>
//
//int max = 0;
//
//void com(int cnt) {
//    if (cnt >= max) {
//        max = cnt;
//        return;
//    } else {
//        max = max;
//        return;
//    }
//}
//
//void dfs(int a[101], int m, int n, int cnt, int i, int z) {
//    if (m <= 0 || z > n) {
//        return;
//    }
//    for (; i <= n; i++) {
//        dfs(a, m - a[i], n, cnt + 1, i + 1, z + 1);
//        if (m == a[n]) {
//            cnt++;
//        }
//        com(cnt);
//    }
//
//}
//
//int main() {
//    int m;
//    int n;
//    scanf("%d %d", &m, &n);
//    int a[101];
//    for (int i = 1; i <= n; i++) {
//        scanf("%d", &a[i]);
//    }
//    dfs(a, m, n, 0, 1, 0);
//    printf("%d", max);
//}
#include <stdio.h>
int c[5];
int cnt = 0;
int v = 0;
void dfs(int ping_zi[1001], int i, int a) {
    if (a == 5) {
            if( (c[1]+c[2]+c[3])>c[4] ){
                v = 1;
            }
        if( v==1 ){
            cnt++;
        }
        v = 0;
        return;
    }
    for (; i < 1001; i++) {
        if (ping_zi[i] == 0) {
            continue;
        }
        c[a] = i;
        ping_zi[i]--;
        dfs(ping_zi, i, a+1);
        ping_zi[i]++;
    }
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
    int  n;
    scanf("%d", &n);
    int ping_zi[1001];
    int y = 0;
    for (; y < 1001; y++) {
        ping_zi[y] = 0;
    }
    int x = 0;
    int i;
    for (; x < n; x++) {
        scanf("%d", &i);
        ping_zi[i]++;
    }
    dfs(ping_zi, 1, 1);
    printf("%d", cnt);
}