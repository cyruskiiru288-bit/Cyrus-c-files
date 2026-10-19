#include <stdio.h>

/*Name :Cyrus Mahugu
Admission:BCS-05-0551/2026
DEGREE TO FARENHEIT CONVERTER*/

double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    double fahrenheit, celsius;


    printf("Enter temperature in Fahrenheit (°F): ");
    if (scanf("%lf", &fahrenheit) != 1) {
        printf("Invalid input.\n");
        return 1;
    }


    celsius = convertToCelsius(fahrenheit);

    
    printf("Input: %.1f°F is approximately %.1f°C\n", fahrenheit, celsius);

    return 0;
}
