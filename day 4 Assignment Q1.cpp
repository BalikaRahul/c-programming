#include <stdio.h>
#include <string.h>

struct Employee {
    int emp_id;
    char name[50];
    char designation[50];
    char department[50];
    int salary;
};

int main() {
    struct Employee emp;
    
    printf("Enter Employee Details:\n");

    printf("Enter Employee-Id: ");
    scanf("%d", &emp.emp_id);

    printf("Enter Name: ");
    scanf("%s", emp.name);

    printf("Enter Designation: ");
    scanf("%s", emp.designation);

    printf("Enter Department: ");
    scanf("%s", emp.department);

    printf("Enter Salary: ");
    scanf("%d", &emp.salary);

    printf("\nEmployee Details:\n");
    printf("Employee-Id: %d\n", emp.emp_id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %d\n", emp.salary);

    return 0;
}