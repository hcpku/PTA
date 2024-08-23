//
// Created by 章辉丞 on 2024/8/24.
//

#include<stdio.h>
#include<math.h>
int main() {
    int a, n, x, t = 0;
    int sum = 0;
    scanf("%d %d", &a, &n);
    for (n = n; n >= 0; n--) {
        x = n;
        for (x = n; x >0; x--) {
            t += a * pow(10, (x-1));
        }
        sum = sum + t;
    }



    printf("s = %d", sum);
}