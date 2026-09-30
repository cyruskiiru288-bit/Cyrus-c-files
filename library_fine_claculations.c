#include <stdio.h>

int main() {
    // Variable declarations
    int bookID;
    int dueDate;
    int returnDate;
    int daysOverdue;
    int fineRate;
    int fineAmount;

    // i. Inputs from the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date (day of month): ");
    scanf("%d", &dueDate);

    printf("Enter Return Date (day of month): ");
    scanf("%d", &returnDate);

    // ii. Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // iii. Determine fine rate and total fine using if...else logic
    if (daysOverdue <= 0) {
        daysOverdue = 0; // No overdue days if returned on or before due date
        fineRate = 0;
        fineAmount = 0;
    } 
    else if (daysOverdue <= 7) {
        fineRate = 20;
        fineAmount = daysOverdue * fineRate;
    } 
    else if (daysOverdue <= 14) {
        fineRate = 50;
        fineAmount = daysOverdue * fineRate;
    } 
    else {
        fineRate = 100;
        fineAmount = daysOverdue * fineRate;
    }

    // iv. Display the output details
    printf("\n--- Library Fine Summary ---\n");
    printf("Book ID       : %d\n", bookID);
    printf("Due Date      : %d\n", dueDate);
    printf("Return Date   : %d\n", returnDate);
    printf("Days Overdue  : %d\n", daysOverdue);
    printf("Fine Rate     : Ksh. %d per day\n", fineRate);
    printf("Fine Amount   : Ksh. %d\n", fineAmount);

    return 0;
}
