//#include<stdio.h>
//
//int main() {
//    int number, cha;
//    scanf("%d", &number);
//
//    cha = number;
//    for (int p = 1; ; p++) {
//        int numbers[10];
//        int max = 0, min = 0;
//        // 初始化为0
//        for (int i = 0; i < 10; i++) {
//            numbers[i] = 0;
//        }
//
//        // 分解每一位
//        for (; number > 0; number /= 10) {
//            int k = number % 10;
//            numbers[k]++;
//        }
//
//        // 算最大值 489
//        // numers[9] numbers[8] numbers[4]
//        for (int i = 9; i >= 0; i--) {
//            int numbers_n = numbers[i];
//            for (; numbers_n !=0; numbers_n--) {
//                max = max * 10 + i;
//            }
//        }
//
//        // 算最小值
//        for (int i = 0; i < 10; i++) {
//            for (; numbers[i] != 0; numbers[i]--) {
//                min = min * 10 + i;
//            }
//        }
//
//        // 计算差值
//        cha = max - min;
//        printf("%d: %d - %d = %d", p, max, min, cha);
//        if (cha != 495) {
//            putchar('\n');
//        } else {
//            return 0;
//        }
//        number = cha;
//    }
//}
#include<stdio.h>

int main() {
    int numbers[10];
    int i, x, k;
    long long result = 0;
    //初始化
    for (i = 0; i < 10; i++) {
        scanf("%d", &x);
        numbers[i] = x;
    }
    //情况1
    if (numbers[0] == 0) {
        for (i = 1; i < 10; i++) {
            for (; numbers[i] != 0; numbers[i]--) {
                result = result * 10 + i;
            }
        }
    }
    //情况2
    if (numbers[0] != 0) {
        for (i = 1; i < 10; i++) {
            int m = numbers[i];
            for (; numbers[i] != 0; numbers[i] -= numbers[i]) {
                k = numbers[i];
                result = result * 10 + i;
            }
            if (m != 0) {
                break;
            }
        }
        numbers[i] = k - 1;
        for (; numbers[0] != 0; numbers[0]--) {
            result = result * 10;
        }
        for (; i < 10; i++) {
            for (; numbers[i] != 0; numbers[i]--) {
                result = result * 10 + i;
            }
        }
    }
    printf("%lld", result);
}