#include <stdio.h>

int main() {
    double cost, dian;
    scanf("%lf", &dian);
    if (dian > 0) {
        if (dian <= 50) {
            cost = dian * 0.53;
            printf("cost = %.2f", cost);
        }
        if (dian > 50) {
            cost = 50 * 0.53 + (dian - 50) * 0.58;
            printf("cost = %.2f", cost);
        }
    } else {
        printf("Invalid Value!");
    }
}