#include <stdio.h>

int main(){
    int num;
    printf("Enter the number ");
    scanf("%d", &num);

    switch (num%2){
        case 1:
            printf("The number %d is odd \n", num);
            break;
        case 0:
            printf("the number %d  is even \n", num);
            break;
        
        }
}
