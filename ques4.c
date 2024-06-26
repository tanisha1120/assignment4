#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch ((a > b)-( b > a)) {
        case 1:
            printf("Maximum is %f \n", a);
            break;
        case 0:
            printf("Maximum is %f \n", b);
            break;
        case -1:
            printf("The numbers are equal ");
            break;
            
        }
}
