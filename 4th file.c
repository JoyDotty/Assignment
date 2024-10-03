#include <stdio.h>

int main() {
    int overdue_days;  
    float fine;        

    //  Number of overdue days
    printf("Enter the number of days the book is overdue: ");
    scanf("%d", &overdue_days);

    // Determine the fine on the number of overdue days
    if (overdue_days <= 7) {
        fine = 20;  
    } else if (overdue_days >= 8 && overdue_days <= 14) {
        fine = 50;  
    } else if (overdue_days >= 15) {
        fine = 100; 
    } else {
        // invalid input
        printf("Invalid input. Overdue days cannot be negative.\n");
        return 1;  // Exit the program with an error code
    }

    //fine amount
    printf("The fine for %d overdue days is: Ksh %.2f\n", overdue_days, fine);

    return 0;
}
