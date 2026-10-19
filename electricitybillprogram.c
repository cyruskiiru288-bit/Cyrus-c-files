#include <stdio.h>

/*Name: Cyrus Kiiru
Admission;BCS-05-0551/2026
CALCULATING ELECTRICITY BILL*/
double calculateElectricBill(int units) {
    double bill = 0.0;

    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }

    return bill;
}

int main() {
    int units = 250;
    double total = calculateElectricBill(units);
    printf("For %d units consumed, the total bill is: KSh. %.2f\n", units, total);
    return 0;
}
