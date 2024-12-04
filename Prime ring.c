#include <stdio.h>
int g=1;
int cnt = 0;
void rec( int m, int n, int h){
    for( ; h<(m+n); h++){
        if( (m+n)%h==0 ){
            g=0;
        }
    }
    if(g==1){
        cnt++;
    }
}
void dfs(int n, int a[16], int b[16], int x) {
    for(; x<=n; x++){
        rec( a[x-1], a[x], 2);
    }
}

int main() {
    int n;
    int a[16];
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        a[i] = i;
    }
    int b[16];
    dfs(n, a, 0, 2);
}