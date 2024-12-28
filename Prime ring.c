#include <stdio.h>

void judge(int x, int y,int z){
    for( ; x<y; x++){
        if( y%x==0 ){
            z++;
        }
    }
    if( z==0 ){

    }
}
void dfs(int n, int i, int b[17], int a[17]){
    for(; i<=n; i++){
        b[i] = 1;
        dfs()
    }
}
int main(){
    int n;
    scanf("%d", &n);
dfs( n, 1, 0, 0);
}