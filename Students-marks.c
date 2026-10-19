#include <stdio.h>

int main() {
    int mark;
    char choice;
    char grade;

    do {
        
        do {
            printf("Enter student's examination mark (0-100): ");
            scanf("%d", &mark);

            if (mark < 0 || mark > 100) {
                printf("Invalid mark! Please enter a value between 0 and 100.\n");
            }
        } while (mark < 0 || mark > 100);

        
        if (mark >= 80) {
            grade = 'A';
        } else if (mark >= 70) {
            grade = 'B';
        } else if (mark >= 60) {
            grade = 'C';
        } else if (mark >= 50) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        
        printf("Mark: %d | Grade: %c\n\n", mark, grade);

        
        printf("Do you want to enter another student's mark? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    printf("Exiting grading system. Goodbye!\n");
    return 0;
}

