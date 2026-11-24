/*
  Week 7 Activity: C Files - Task 3
  Retail Shop Daily Sales Transactions
  
  BCS-05-0551/2026
  CYRUS KIIRU

 */

#include <stdio.h>

int main() {
    FILE *file;
    double amount = 0.0;
    double total_sales = 0.0;
    int transaction_count = 0;

    printf("=== Daily Retail Sales Summary ===\n\n");

    
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        perror("Error opening sales.txt");
        printf("Ensure 'sales.txt' exists in the same directory as this executable.\n");
        return 1;
    }

    
    while (fscanf(file, "%lf", &amount) == 1) {
        total_sales += amount;
        transaction_count++;
    }

    
    fclose(file);

    printf("Transactions Processed : %d\n", transaction_count);
    printf("Total Sales for the Day: KES %.2f\n", total_sales);

    return 0;
}
