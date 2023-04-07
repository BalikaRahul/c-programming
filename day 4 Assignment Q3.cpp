#include <stdio.h>
#include <string.h>
#include <time.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int roll_no;
    char name[50];
    struct Date birth_date;
    struct Date admission_date;
};

int calculate_age(struct Date dob, struct Date adm) {
    int age = adm.year - dob.year;
    if (adm.month < dob.month || (adm.month == dob.month && adm.day < dob.day)) {
        age--;
    }
    return age;
}

int main() {
    struct Student student;

    printf("Enter Student Details\n");
    printf("Enter Roll-Number: ");
    scanf("%d", &student.roll_no);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Birth-Date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &student.birth_date.day, &student.birth_date.month, &student.birth_date.year);

    printf("Enter Admission-Date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &student.admission_date.day, &student.admission_date.month, &student.admission_date.year);

    // Calculate age of student at the time of admission
    int age = calculate_age(student.birth_date, student.admission_date);

    printf("\nApproximate Age of Student at the Time of Admission\n");
    printf("%d Years\n", age);

    return 0;
}