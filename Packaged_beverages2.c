#include<stdio.h>

int main() {
    int n, m, a[100], i, j, s = 0, k;
    printf("请输入有多少升饮料和瓶子的个数：");
    scanf("%d %d", &m, &n);
    printf("请输入n个瓶子的容积：");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            for (k = j + 1; k < n; k++) {
                if ((m == a[i] + a[j] + a[k]) && (a[i] != a[j]) && (a[j] != a[k])) {
                    s++;
                    printf("%d+%d+%d\n", a[i], a[j], a[k]);
                }
            }

        }
    }

    printf("%d\n", s);
    return 0;
}