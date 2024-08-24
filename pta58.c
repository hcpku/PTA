#include<stdio.h>

int main() {
    int number, chance, i = 0;
    scanf("%d %d", &number, &chance);
    int guess;
    for (; chance > 0; chance--) {
        scanf("%d", &guess);
        i++;
        if (guess == number && i <= 3 && i > 1) {
            printf("Lucky You!");
            break;
        }
        if (guess == number && i > 3) {
            printf("Good Guess!");
            break;
        }
        if (guess == number && i == 1) {
            printf("Bingo!");
            break;
        }
        if (guess > number && guess >= 0) {
            printf("Too big\n");
        }
        if (guess < number && guess >= 0) {
            printf("Too small\n");
        }
        if (guess != number && chance == 1) {
            printf("Game Over");
        }
        if (guess < 0) {
            printf("Game Over");
            break;
        }
    }
}