#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if ((N % 5) <= 3 && (N % 5) != 0) {
        printf("Fishing in day %d", N);
    } else {
        printf("Drying in day %d", N);
    }
}