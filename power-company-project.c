#include <stdio.h>

int main() {
    int consumption[10];

    // Accept electricity consumption for 10 households
    printf("Enter electricity units consumed for 10 households:\n");
    for (int i = 0; i < 10; i++) {
        printf("Household %d: ", i + 1);
        scanf("%d", &consumption[i]);
    }

    // Display the results
    printf("\nElectricity Consumption Report:\n");
    printf("---------------------------------\n");
    printf("Household Card\tUnits Consumed\n");
    printf("---------------------------------\n");
    for (int i = 0; i < 10; i++) {
        printf("Household %d\t%d units\n", i + 1, consumption[i]);
    }

    return 0;
}

