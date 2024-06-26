#include <stdio.h>

int main() {
    int month;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    int days;

    switch (month) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
            days = 31;
            printf("Total days in month %d are %d\n", month, days);
            break;
        case 4: 
        case 6: 
        case 9: 
        case 11:
            days = 30;
            printf("Total days in month %d are %d\n", month, days);
            break;
        case 2:
            int year;
            printf("Enter the year ");
            scanf("%d",&year);
            if (year%4==0){
              printf("The days are  29");
            }
            else{
            printf("The days are 28");
            }
            
            break;
        default:
            printf("Invalid month!\n");
            
    }
}
