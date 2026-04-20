#include <stdio.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;   // M or F
    int day, month, year;
    float salary;
};


void totalEmployees(int n) {
    printf("Total employees = %d\n", n);
}


void countGender(struct EMPLOYEE e[], int n) {
    int male = 0, female = 0, i;

    for(i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);
}


void highSalary(struct EMPLOYEE e[], int n) {
    int i;
    printf("Employees with salary > 10000:\n");

    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000) {
            printf("%s\n", e[i].name);
        }
    }
}


int isAsstManager(char str[]) {
    char target[] = "Asst Manager";
    int i = 0;

    while(str[i] != '\0' || target[i] != '\0') {
        if(str[i] != target[i])
            return 0;
        i++;
    }
    return 1;
}

void checkDesignation(struct EMPLOYEE e[], int n) {
    int i;
    printf("Employees with designation Asst Manager:\n");

    for(i = 0; i < n; i++) {
        if(isAsstManager(e[i].designation)) {
            printf("%s\n", e[i].name);
        }
    }
}

int main() {
    struct EMPLOYEE e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i+1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining (dd mm yyyy): ");
        scanf("%d %d %d", &e[i].day, &e[i].month, &e[i].year);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    totalEmployees(n);
    countGender(e, n);
    highSalary(e, n);
    checkDesignation(e, n);

    return 0;