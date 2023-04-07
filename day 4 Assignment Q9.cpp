#include <stdio.h>

// Define the union student
typedef union {
    char name[50];
    float gpa;
} Student;

int main() {
    Student student;

    // Prompt the user for the student's name and GPA
    printf("Enter the student's name: ");
    scanf("%s", student.name);
    printf("Enter the student's GPA: ");
    scanf("%f", &student.gpa);

    // Print the student's name and GPA
    printf("Student's name: %s\n", student.name);
    printf("Student's GPA: %.2f\n", student.gpa);

    return 0;
}