#include<stdio.h>

int main() {
    char o='q';
    int number1;
    int number2;
    int sum = 0, m = 0;
    scanf("%d%c%d", &number1, &o, &number2);
    if ((o != '/' && o != '*' && o != '+' && o != '-') || scanf==0 ) {
        m = 1;
    }
    if (o == '*') {
        sum += number1 * number2;
    } else if (o == '/' ) {
        if ( number2!=0){
            sum += number1 / number2;
        }else{
            m = 1;
        }
    } else if (o == '+') {
        sum += number1 + number2;
    } else if (o == '-') {
        sum += number1 - number2;
    }
    for (;;) {
        scanf("%c%d", &o, &number2);
        if (o != '/' && o != '*' && o != '+' && o != '-' && o != '=') {
            m = 1;
            break;
        }
        if (o == '*') {
            sum *= number2;
        } else if (o == '/' && number2 != 0) {
            sum /= number2;
        } else if (o == '+') {
            sum += number2;
        } else if (o == '-') {
            sum -= number2;
        }
        if (o == '=') {
            break;
        }
        if (o == '/' && number2 == 0) {
            m = 1;
            break;
        }
    }
    if (m == 1) {
        printf("ERROR");
    } else {
        printf("%d", sum);
    }
}