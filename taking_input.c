#include <stdio.h>

	

int main() {
    float height;         
    double bankBalance;   
    char phoneNumber[11];  
                           

    printf("--- Enter User Details ---\n");

    printf("Enter your height (in meters, e.g., 1.75): ");
    scanf("%f", &height);

    printf("Enter your bank balance in KSh (e.g., 125000.50): ");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number (e.g., 0712345678 or +254712345678): ");
    scanf("%11s", phoneNumber);

    
    printf("Height       : %.2f meters\n", height);      
    printf("Bank Balance : KSh %'.2lf\n", bankBalance); 
    printf("Phone Number : %s\n", phoneNumber);
    printf("=====================================\n");

    return 0;
}
