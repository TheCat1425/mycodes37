#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 50
#define NUM_CTS 5

struct Student {
    char name[50];
    int id;
    int marks[NUM_CTS];
};

int main() {
    struct Student students[NUM_STUDENTS];
    int i, j, max;

    // Take input for 50 students
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Marks for %d CT's: ", NUM_CTS);
        for (j = 0; j < NUM_CTS; j++) {
            scanf("%d", &students[i].marks[j]);
        }

        // Calculate total marks for this student
        int total = 0;
        for (j = 0; j < NUM_CTS; j++) {
            total += students[i].marks[j];
        }
        students[i].marks[NUM_CTS] = total; // store total marks in the last index
    }

    // Print highest scorers for each CT separately
    for (j = 0; j < NUM_CTS; j++) {
        printf("Highest scorer for CT%d: ", j + 1);

        // Find highest marks scorer for this CT
        max = -1;
        char max_name[50];
        for (i = 0; i < NUM_STUDENTS; i++) {
            if (students[i].marks[j] > max) {
                max = students[i].marks[j];
                strcpy(max_name, students[i].name);
            }
        }

        printf("%s (%d)\n", max_name, max);
    }

    return 0;
}
