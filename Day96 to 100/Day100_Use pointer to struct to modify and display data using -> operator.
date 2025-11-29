#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    // Pointer to structure
    struct Employee *emp;

    // Allocate memory dynamically
    emp = (struct Employee *)malloc(sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Modify structure members using -> operator
    printf("Enter employee name: ");
    scanf("%s", emp->name);

    printf("Enter employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter employee salary: ");
    scanf("%f", &emp->salary);

    // Display structure data using -> operator
    printf("\n--- Employee Details ---\n");
    printf("Name   : %s\n",  emp->name);
    printf("ID     : %d\n",  emp->id);
    printf("Salary : %.2f\n", emp->salary);

    // Free allocated memory
    free(emp);

    return 0;
}
