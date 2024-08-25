#include<stdio.h>

int main() {
    int number, cha;
    int n, ge, shi, bai;
    scanf("%d", &number);
    cha = number;
    for (n = 1; cha > 0; n++) {
        ge = cha % 10;
        shi = ((cha - ge) / 10) % 10;
        bai = (cha - ge - shi * 10) / 100;
        if (ge > shi && ge > bai) {
            if (shi > bai) {
                cha = ge * 100 + shi * 10 + bai - bai * 100 - shi * 10 - ge;
                if (cha != 495) {
                    printf("%d: %d - %d = %d\n", n, (ge * 100 + shi * 10 + bai), (bai * 100 + shi * 10 + ge), cha);
                } else {
                    printf("%d: %d - %d = %d", n, (ge * 100 + shi * 10 + bai), (bai * 100 + shi * 10 + ge), cha);
                    break;
                }
            } else {
                cha = (ge * 100 + bai * 10 + shi) - (shi * 100 - bai * 10 - ge);
                if (cha != 495) {
                    printf("%d: %d - %d = %d\n", n, (ge * 100 + bai * 10 + shi), (shi * 100 + bai * 10 + ge), cha);
                } else {
                    printf("%d: %d - %d = %d", n, (ge * 100 + bai * 10 + shi), (shi * 100 + bai * 10 + ge), cha);
                    break;
                }
            }
        }
        if (shi > ge && shi > bai) {
            if (ge > bai) {
                cha = shi * 100 + ge * 10 + bai - bai * 100 - ge * 10 - shi;
                if (cha != 495) {
                    printf("%d: %d - %d = %d\n", n, (shi * 100 + ge * 10 + bai), (bai * 100 + ge * 10 + shi), cha);
                } else {
                    printf("%d: %d - %d = %d", n, (shi * 100 + ge * 10 + bai), (bai * 100 + ge * 10 + shi), cha);
                    break;
                }
            } else {
                cha = shi * 100 + bai * 10 + ge - ge * 100 - bai * 10 - shi;
                if (cha != 495) {
                    printf("%d: %d - %d = %d\n", n, (shi * 100 + bai * 10 + ge), (ge * 100 + bai * 10 + shi), cha);
                } else {
                    printf("%d: %d - %d = %d", n, (shi * 100 + bai * 10 + ge), (ge * 100 + bai * 10 + shi), cha);
                    break;
                }
            }
        }
        if (bai > shi && bai > ge) {
            if (shi > ge) {
                cha = bai * 100 + shi * 10 + ge - ge * 100 - shi * 10 - bai;
                if (cha != 495) {
                    printf("%d: %d - %d = %d\n", n, (bai * 100 + shi * 10), (ge * 100 + shi * 10 + bai), cha);
                } else {
                    printf("%d: %d - %d = %d", n, (bai * 100 + shi * 10), (ge * 100 + shi * 10 + bai), cha);
                    break;
                }
            } else {
                cha = bai * 100 + ge * 10 + shi - shi * 100 - ge * 10 - bai;
                if (cha != 495) {
                    printf("%d: %d - %d = %d\n", n, (bai * 100 + ge * 10 + shi), (shi * 100 + ge * 10 + bai), cha);
                } else {
                    printf("%d: %d - %d = %d", n, (bai * 100 + ge * 10 + shi), (shi * 100 + ge * 10 + bai), cha);
                    break;
                }
            }
        }
    }
}