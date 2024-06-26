#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float r1, r2, re, img;
    double d;

    printf("Enter the coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    switch ((d > 0) - (d < 0)) {
        case 1:
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and distinct: %f and %f\n", r1, r2);
            break;
        case -1:
            re = -b / (2 * a);
            img = sqrt(-d) / (2 * a);
            printf("Roots are imaginary: %f + i%f and %f - i%f\n", re, img, re, img);
            break;
        case 0:
            r1 = -b / (2 * a);
            printf("The roots are real and equal: %f\n", r1);
            break;
        default:
            printf("ERROR: Invalid input\n");
            break;
    }

    return 0;
}
