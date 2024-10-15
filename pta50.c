#include<stdio.h>

int main() {
    char ch;
    int x = 0, y = 0, z = 0;
    for (;;) {
        ch = getchar();
        if (ch != '\n') {
            if (ch == ' ') {
                x++;
            } else if (ch >= '0' && ch <= '9') {
                y++;
            } else {
                z++;
            }
        }
        if (ch == '\n') {
            break;
        }
    }
    printf("blank = %d, digit = %d, other = %d", x, y, z);
}