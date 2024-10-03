#include <stdio.h>

int main() {
    int bookID;
    int dueDate, returnDate;
    int overdueDays;
    int fine;

    // Prompt the user for book ID
    printf("Enter the Book ID (integer): ");
    scanf("%d", &bookID);

    // Prompt the user for due date
    printf("Enter the due date (integer): ");
    scanf("%d", &dueDate);

    // Prompt the user for return date
    printf("Enter the return date (integer): ");
    scanf("%d", &returnDate);

    // Calculate overdue days
    overdueDays = returnDate - dueDate;

    // Determine the fine based on overdue days
    if (overdueDays > 0) {
        if (overdueDays <= 7) {
            fine = 20;
        } else if (overdueDays <= 14) {
            fine = 50;
        } else {
            fine = 100;
        }

        // Output the result
        printf("Book ID: %d\n", bookID);
        printf("Overdue Days: %d\n", overdueDays);
        printf("Total Fine: Ksh %d\n", fine);
    } else {
        printf("The book is returned on time. No fine.\n");
    }

    return 0;
}