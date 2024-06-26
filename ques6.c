#include <stdio.h>

int main() {
    int num;

    printf("Enter the number ");
    scanf("%d", &a);

    switch ((num > 0) -(num < 0)) {
        case 1:
            printf("The number %d is positive \n", num);
            break;
        case 0:
            printf("the number %d  is negative \n", num);
            break;
        case -1:
            printf("The number %d is zero",num);
        default:
            printf("Invalid input ");
        
        }
}
