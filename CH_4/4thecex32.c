#include <stdio.h>
#include <math.h>

int main() {
    float a, sine, cosine, squares;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &a);
    float an = a * (M_PI / 180.0);

    sine = sin(a);
    cosine = cos(a);

    squares = (sine * sine) + (cosine * cosine);
    (squares==1) ? printf("The sum of squares of sine and cosine is equal to 1.\n") :
    printf("The sum of squares of sine and cosine is not equal to 1.\n");
    return 0;
}
