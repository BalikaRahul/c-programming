#include <stdio.h>

struct Employee {
    int empno;
    char name[50];
    float salary;
};

int main() {
    int n, i;
    struct Employee emp[50], max_emp;

    printf("How many employee info you want to accept: ");
    scanf("%d", &n);

    // Accept employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d: \n", i+1);
        printf("Employee number: ");
        scanf("%d", &emp[i].empno);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Find employee with highest salary
    max_emp = emp[0];
    for (i = 1; i < n; i++) {
        if (emp[i].salary > max_emp.salary) {
            max_emp = emp[i];
        }
    }

    // Display employee with highest salary
    printf("\nHighest salary employee details:\n");
    printf("\nEMPNO\tNAME\tSALARY\n");
    printf("%d\t%s\t%.2f\n", max_emp.empno, max_emp.name, max_emp.salary);

    return 0;
}.lkkengjij