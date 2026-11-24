/*
  Week 6 Activity: Arrays - Task 1
  1D Array - Weekly Revenue Tracker
  BCS-05-0551/2026
  CYRUS KIIRU
 */

#include <stdio.h>

int main() {
    float revenue[7];
    float total_revenue = 0.0, average_revenue = 0.0;
    int i;
    const char *days[7] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", 
        "Friday", "Saturday", "Sunday"
    };

    printf("=== Hotel Weekly Revenue Tracker ===\n\n");

    
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for %s (KES): ", days[i]);
        scanf("%f", &revenue[i]);
        total_revenue += revenue[i];
    }

    
    average_revenue = total_revenue / 7.0;

    
    printf("\n--- Weekly Revenue Summary ---\n");
    printf("Total Weekly Revenue : KES %.2f\n", total_revenue);
    printf("Average Daily Revenue: KES %.2f\n", average_revenue);

    return 0;
}
