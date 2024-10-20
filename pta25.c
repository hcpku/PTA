#include<stdio.h>

int main() {
    int number, x, y, z;
    scanf("%d", &number);
    if (number < 100 || number > 999) {
        printf("Invalid Value.");
    }
    if (number >= 100 && number <= 999) {
        x = number % 10;
        y = ((number - x) / 10) % 10;
        z = (number - x - y * 10) / 100;
        if (x * x * x + y * y * y + z * z * z == number) {
            printf("Yes");
        } else {
            printf("No");
        }
    }
}
