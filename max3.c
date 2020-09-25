#include <stdio.h>

double max3x(double x, double y, double z) {

    double x1, x2, x3;
    x1 = x * y;
    x2 = y * z;
    x3 = x * z;

    double t = x1;
    if (t < x2) {
        t = x2;
    }
    if (t < x3) {
        t = x3;
    }

    return t;

}


int mainn() {

    double x, y, z;

    scanf_s("%lf", &x);

    scanf_s("%lf", &y);

    scanf_s("%lf", &z);

    double max_real = max3x(x, y, z);

    printf("max = %.4lf", max_real);

}