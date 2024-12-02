#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    for( int i = 0; i<n; i++){
        a[i] = i + 1;
    }
    int h = 0;
    for( int m = 0, k = 0; ; m++){
        if( m>=(n-1) ){
            m = 0;
        }
        if( a[m] !=0 ){
            k++;
        }
        if( k ==3 && a[m]!=0 ){
            k = 0;
            a[m] = 0;
            h++;
        }if( h==(n-1) ){
            printf("%d", m);
            break;
        }
    }
}