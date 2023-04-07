#include <stdio.h>

struct Student {
    int roll_no;
    char stud_name[50];
    int mark1, mark2, mark3;
    int total_marks;
    float avg_marks;
};

int main() {
    int i, j, n;
    struct Student student[50], temp;

    printf("Enter the number of records: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Record for Student-%d\nEnter Roll-No.: ", i + 1);
        scanf("%d", &student[i].roll_no);
        printf("Enter Name: ");
        scanf("%s", student[i].stud_name);
        printf("Enter Marks of Subject 1: ");
        scanf("%d", &student[i].mark1);
        printf("Enter Marks of Subject 2: ");
        scanf("%d", &student[i].mark2);
        printf("Enter Marks of Subject 3: ");
        scanf("%d", &student[i].mark3);
        
        student[i].total_marks = student[i].mark1 + student[i].mark2 + student[i].mark3;
        student[i].avg_marks = (float)student[i].total_marks / 3;
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (student[i].total_marks < student[j].total_marks) {
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }

    printf("\nRecords in Descending Order (According to Total-Marks)\n\nROLLNO\tNAME\tTOTAL-MARKS\tAVG\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.2f\n", student[i].roll_no, student[i].stud_name, student[i].total_marks, student[i].avg_marks);
    }

    return 0;
}
