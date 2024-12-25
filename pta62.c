#include<stdio.h>

int main() {
    char ch;
    int x = 0, y = 0, z = 0, m = 0;
    for ( ; getchar(); ) {
        ch = getchar();
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            x++;
            continue;
        }
        if (ch == ' ' || ch == '\n') {
            y++;
            continue;
        }
        if (ch >= '0' && ch <= '9') {
            z++;
        } else {
            m++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", x, y - 1, z, m);
}