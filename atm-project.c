#include <stdio.h>

int main() {
    double balance = 50000.0;
    double withdrawal;

    printf("Welcome to the ATM System\n");
    printf("Initial Balance: KSh %.2f\n\n", balance);

    while (1) {
        printf("Enter withdrawal amount (or 0 to exit): KSh ");
        scanf("%l f", &withdrawal);

        
        if (withdrawal == 0) {
            printf("Thank you for using our ATM. Goodbye!\n");
            break;
        }

        
        if (withdrawal > balance) {
            printf("Error: Insufficient balance to complete this transaction.\n");
            printf("Transaction cancelled.\n");
            break;
        }

        
        balance -= withdrawal;
        printf("Withdrawal successful! Remaining Balance: KSh %.2f\n\n", balance);
    }

    return 0;
}

