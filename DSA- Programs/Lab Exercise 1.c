#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_SHIFTS 100

typedef struct {
    int id;
    char name[50];
    int available_shifts[MAX_SHIFTS];
} Employee;

typedef struct {
    int id;
    char date[20];
    int employee_id;
} Shift;

Employee employees[MAX_EMPLOYEES];
Shift shifts[MAX_SHIFTS];
int numEmployees = 0;
int numShifts = 0;

void addEmployee();
void viewAllEmployees();
void addShift();
void viewAllShifts();
void deleteShift();
void searchShift();
void generateReports();

int main() {
    int choice;

    do {
        printf("\nEmployee Shift Scheduling System\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Add Shift\n");
        printf("4. View All Shifts\n");
        printf("5. Delete Shift\n");
        printf("6. Search Shift\n");
        printf("7. Generate Reports\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                viewAllEmployees();
                break;
            case 3:
                addShift();
                break;
            case 4:
                viewAllShifts();
                break;
            case 5:
                deleteShift();
                break;
            case 6:
                searchShift();
                break;
            case 7:
                generateReports();
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 8.\n");
        }
    } while (choice != 8);

    return 0;
}

void addEmployee() {
    if (numEmployees >= MAX_EMPLOYEES) {
        printf("Cannot add more employees. Maximum limit reached.\n");
        return;
    }
    printf("Enter employee ID: ");
    scanf("%d", &employees[numEmployees].id);
    printf("Enter employee name: ");
    scanf("%s", employees[numEmployees].name);
    numEmployees++;
    printf("Employee added successfully.\n");
}

void viewAllEmployees() {
    printf("All Employees:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("ID: %d, Name: %s\n", employees[i].id, employees[i].name);
    }
}

void addShift() {
    if (numShifts >= MAX_SHIFTS) {
        printf("Cannot add more shifts. Maximum limit reached.\n");
        return;
    }

    printf("Enter shift ID: ");
    scanf("%d", &shifts[numShifts].id);
    printf("Enter date (YYYY-MM-DD format): ");
    scanf("%s", shifts[numShifts].date);
    printf("Enter employee ID for this shift: ");
    scanf("%d", &shifts[numShifts].employee_id);
    numShifts++;
    printf("Shift added successfully.\n");
}

void viewAllShifts() {
    printf("All Shifts:\n");
    for (int i = 0; i < numShifts; i++) {
        printf("ID: %d, Date: %s, Employee ID: %d\n", shifts[i].id, shifts[i].date, shifts[i].employee_id);
    }
}

void deleteShift() {
    int shiftId, i;
    printf("Enter the ID of the shift to delete: ");
    scanf("%d", &shiftId);

    for (i = 0; i < numShifts; i++) {
        if (shifts[i].id == shiftId) {
            shifts[i] = shifts[numShifts - 1];
            numShifts--;
            printf("Shift deleted successfully.\n");
            return;
        }
    }

    printf("Shift not found.\n");
}

void searchShift() {
    int employeeId, i;
    printf("Enter the employee ID to search for shifts: ");
    scanf("%d", &employeeId);

    printf("Shifts for employee %d:\n", employeeId);
    for (i = 0; i < numShifts; i++) {
        if (shifts[i].employee_id == employeeId) {
            printf("ID: %d, Date: %s\n", shifts[i].id, shifts[i].date);
        }
    }
}

void generateReports() {
    printf("Report generation feature is not implemented yet.\n");
}

