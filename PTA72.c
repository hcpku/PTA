#include<stdio.h>

int main() {
    char c;
    int i = 1;
    int x = 1;
    for (; i == 1;) {
        c = getchar();
        if (c) {
            if (c == ' ') {
                x = 1;
            }
            if ((c >= 'a' && c <= 'z') && x == 1) {
                printf("%c", c - 32);
            } else {
                printf("%c", c);
            }
            if (c != ' ') {
                x = 2;
            }
        } if( c=='\n' ){
            break;
        }
    }
}