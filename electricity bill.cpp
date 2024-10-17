#include <stdio.h>

// Function to calculate electricity bill
float calculate_bill(int units) {
    float bill;

    // Calculate the total bill based on the number of units
    if (units <= 199) {
        bill = units * 1.20;
    } else if (units >= 200 && units < 400) {
        bill = units * 1.50;
    } else if (units >= 400 && units < 600) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }

    return bill;
}

int main() {
    int units;
    float total_bill;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Check if the input is valid (non-negative)
    if (units < 0) {
        printf("Error: The number of units consumed cannot be negative.\n");
    } else {
        // Calculate the electricity bill
        total_bill = calculate_bill(units);
        
        // Display the total bill
        printf("\nTotal electricity bill for %d units is: Ksh %.2f\n", units, total_bill);
    }

    return 0;
}
