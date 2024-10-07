#include<stdio.h>

int main() {
    int number, cha;
    scanf("%d", &number);

    cha = number;
    for (int p = 1; ; p++) {
        int numbers[10];
        int max = 0, min = 0;
        // 初始化为0
        for (int i = 0; i < 10; i++) {
            numbers[i] = 0;
        }

        // 分解每一位
        for (; number > 0; number /= 10) {
            int k = number % 10;
            numbers[k]++;
        }

        // 算最大值 489
        // numers[9] numbers[8] numbers[4]
        for (int i = 9; i >= 0; i--) {
            int numbers_n = numbers[i];
            for (; numbers_n !=0; numbers_n--) {
                max = max * 10 + i;
            }
        }

        // 算最小值
        for (int i = 0; i < 10; i++) {
            for (; numbers[i] != 0; numbers[i]--) {
                min = min * 10 + i;
            }
        }

        // 计算差值
        cha = max - min;
        printf("%d: %d - %d = %d", p, max, min, cha);
        if (cha != 495) {
            putchar('\n');
        } else {
            return 0;
        }
        number = cha;
    }
}
