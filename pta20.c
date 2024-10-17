#include<stdio.h>
#include<math.h>

int main() {
    double x;
    double t;
    scanf("%lf", &x);
    if (x >= 0) {
        t = pow(x, 0.5);
    } else {
        t = pow((x + 1), 2) + 2 * x + 1.0 / x;
    }
    printf("f(%.2f) = %.2f", x, t);


}