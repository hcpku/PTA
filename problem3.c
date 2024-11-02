#include<stdio.h>

int main() {
    int a[100000];
    int n;
    int t=0;
    scanf("%d", &n);
    int i;
    for (i = 2; i <= n; i++) {
        int sum = 0;
        if (n % i == 0) {
            int m;
            for (m = 2; m < i; m++) {
                if (i % m == 0) {
                    sum++;
                }
            }
            if (sum == 0) {
                a[t]=i;
                t++;
            }
        }
    }
    for( n=0; n<t;n++){
        if( n!=(t-1)){
            printf("%d ", a[n]);
        }else{
            printf("%d", a[n]);
        }
    }
}