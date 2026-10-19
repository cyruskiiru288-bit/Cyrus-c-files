#include <stdio.h>

/*Name:Cyrus Kiiru
Admission:BCS-05-0551/2026
FARE CALCULATOR*/
double calculateFare(double distance_km) {
    const double rate_per_km = 50.0;
    return distance_km * rate_per_km;
}

int main() {
    double distance = 10.0;
    double fare = calculateFare(distance);
    printf("If the distance is %.1f km, the total fare is: KSh. %.2f\n", distance, fare);
    return 0;
}
