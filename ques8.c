#include <stdio.h>

int main() {
    char operation ;
    double num1, num2, result;

    printf("Enter the operation +, -, *, / ");
    scanf("%c", &operation);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if/(num2 != 0){
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } 
            else{
                printf("Error cant divide by zero \n");
            }
            break;
        default:
            printf("Error Ivalid input \n");
            break;
    }

    return 0;
}
