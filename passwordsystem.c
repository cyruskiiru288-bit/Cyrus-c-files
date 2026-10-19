/*Name:Cyrus Kiiru
Admission : BCS-05-0551/2026*/
#include <stdio.h>
#include <string.h>

int main() {
    int password;

    do {
        printf("Enter the password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }
    } while (password != 1234);

    printf("Access Granted\n");
    return 0;
}
