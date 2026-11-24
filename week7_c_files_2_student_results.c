/*
 * Week 7 Activity: C Files - Task 2
 * University Student Examination Results 
 
 BCS-05-0551/2026
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    char reg_no[30];
    float total_marks;
};

int main() {
    FILE *file;
    struct Student s;
    int count = 0;

    printf("=== University Student Examination Results ===\n\n");

    
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        perror("Error opening results.dat");
        printf("Ensure 'results.dat' exists in the same directory as this executable.\n");
        return 1;
    }

    printf("%-30s | %-12s\n", "Student Name", "Total Marks");
    printf("---------------------------------------------\n");

    
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("%-30s | %.2f\n", s.name, s.total_marks);
        count++;
    }

    if (count == 0) {
        printf("No student records found in results.dat.\n");
    }

    fclose(file);
    return 0;
}
