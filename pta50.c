//#include<stdio.h>
//
//int main() {
//    char ch;
//    int x = 0, y = 0, z = 0, m = 0;
//    ch = getchar();
//    for (; getchar()!= EOF;) {
//
//        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
//            x++;
//            continue;
//        }
//        if (ch == ' ' || ch == '\n') {
//            y++;
//            continue;
//        }
//        if (ch >= '0' && ch <= '9') {
//            z++;
//        } else {
//            m++;
//        }
//        ch = getchar();
//    }
//    printf("letter = %d, blank = %d, digit = %d, other = %d", x, y - 1, z, m);
////}
//#include<stdio.h>
//
//int main(){
//    char ch[40][10];
//    for( int i=0; i<=40; i++){
//        scanf("%s", &ch[i]);
//        printf("%s", ch[i]);
////        if( ch[i]=='\0' ) break;
//    }
//}
////#include<stdio.h>
////
//int main() {
//    char ch[40][40];
//    int m = 0;
//    for (int i = 0; i <40; i++) {
//        ch[i][i] = 0;
//    }
//    for (int i = 0; i <40; i++) {
//        ch[i][i] = getchar();
//        if (ch[i][i] == '\n') {
//            printf("%c", ch[i-1][i-1]);
//            m++;
//        }
//        if (ch[i][i] == 0) {
//            printf("%c\n", ch[i-1][i-1]);
//        }
//    }
//}
#include<stdio.h>

#include <string.h>

int main() {
    char ch[4][29];
    for (int i = 0; i <= 27; i++) {
        ch[1][i] = 0;
        ch[2][i] = 0;
        ch[3][i] = 0;
        ch[0][i] = 0;
    }
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 28; j++) {
            gets( ch[i]);
            if (ch[i][j] == '\n') {
                printf("%c", ch[i][j - 1]);
                break;
            }
            if (ch[i][j] == 0) {
                printf("%c\n", ch[i][j]);
            }
        }
    }
}