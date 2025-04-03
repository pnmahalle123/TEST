// C Program to find square
// root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double findSqrt(double x)
{
    // for 0 and 1, the square roots are themselves
    if (x < 2)
        return x;

    // considering the equation values
    double y = x;
    double z = (y + (x / y)) / 2;

    // as we want to get upto 5 decimal digits, the absolute
    // difference should not exceed 0.00001
    while (fabs(y - z) >= 0.00001) {
        y = z;
        z = (y + (x / y)) / 2;
    }
    return z;
}

int main()
{
    double n = 100;
    double ans = findSqrt(n);
    printf("%.5f is the square root of 5\n", ans);
    return 0;
}
