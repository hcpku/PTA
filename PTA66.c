#include<stdio.h>
#include<math.h>

int main() {
    int n, x;
    int i = 1;
    int m;
    scanf("%d", &n);
    if (n != 1) {
        for (; i <= n; i++) {
            x = pow(2, i) - 1;
            if ((x % 2) == 1) {
                for (m = 2; m < x; m++) {
                    if ((x % m) == 0) {
                        break;
                    }
                    if ((x % m) != 0 && m == (x - 1)) {
                        printf("%d\n", x);
                        break;
                    }
                }
            }
        }
    } else {
        printf("None");
    }

}