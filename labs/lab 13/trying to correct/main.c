#include <stdio.h>
#include <string.h>

#define SIZE_EMP 100
#define SIZE_DEPT 50

typedef struct Employee {
    char eid[10];
    char lname[50];
    int sal;
} Employee;

typedef struct Department {
    char eid[10];
    char dname[50];
} Dept;

int readEmp(Employee ArrayOfEmployees[], char fileName[]) {
    FILE *f_emp = fopen(fileName, "r");
    if (f_emp == NULL) {
        printf("Error opening file %s\n", fileName);
        return 0;
    }

    int empCount = 0;
    while (fscanf(f_emp, "%s %s %d", ArrayOfEmployees[empCount].eid, ArrayOfEmployees[empCount].lname, &ArrayOfEmployees[empCount].sal) != EOF) {
        empCount++;
    }
    fclose(f_emp);
    return empCount;
}

void readDept(Dept ArrayOfDepartments[], int *numOfDept, char fileName[]) {
    FILE *f_dept = fopen(fileName, "r");
    if (f_dept == NULL) {
        printf("Error opening file %s\n", fileName);
        return;
    }

    int deptCount = 0;
    while (fscanf(f_dept, "%s %s", ArrayOfDepartments[deptCount].eid, ArrayOfDepartments[deptCount].dname) != EOF) {
        deptCount++;
    }
    fclose(f_dept);
    *numOfDept = deptCount;
}

void printAll(Employee Arr[], int totalEmp, Dept ArrayOfDepartments[], int totalDept) {
    printf("Printing the list of Employees: \n=================\n");
    for (int i = 0; i < totalEmp; i++) {
        printf("ID: %s\tLName: %s\tSalary: %d", Arr[i].eid, Arr[i].lname, Arr[i].sal);
        int found = 0;
        for (int j = 0; j < totalDept; j++) {
            if (strcmp(ArrayOfDepartments[j].eid, Arr[i].eid) == 0) {
                printf("\tDepartment: %s", ArrayOfDepartments[j].dname);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("\tDepartment: None");
        }
        printf("\n");
    }
}

void search_employee(Employee Arr[], int totalEmp, Dept ArrayOfDepartments[], int totalDept, char qStr[]) {
    int found = 0;
    for (int i = 0; i < totalEmp; i++) {
        if (strcmp(Arr[i].lname, qStr) == 0) {
            printf("ID: %s\tLName: %s\tSalary: %d", Arr[i].eid, Arr[i].lname, Arr[i].sal);
            for (int j = 0; j < totalDept; j++) {
                if (strcmp(ArrayOfDepartments[j].eid, Arr[i].eid) == 0) {
                    printf("\tDepartment: %s\n", ArrayOfDepartments[j].dname);
                    found = 1;
                    break;
                }
            }
        }
    }
    if (!found) {
        printf("Employee %s Not Found\n", qStr);
    }
}

int totalSal_dept(Employee Arr[], int totalEmp, Dept ArrayOfDepartments[], int totalDept, char qStr[]) {
    int totalSalary = 0;
    for (int i = 0; i < totalEmp; i++) {
        for (int j = 0; j < totalDept; j++) {
            if (strcmp(ArrayOfDepartments[j].dname, qStr) == 0 && strcmp(Arr[i].eid, ArrayOfDepartments[j].eid) == 0) {
                totalSalary += Arr[i].sal;
                break; // Break out of the loop once a match is found to avoid unnecessary iterations
            }
        }
    }
    return totalSalary;
}


int main(void) {
    char empFileName[51], deptFileName[51], queryFileName[51];
    scanf("%s %s %s", empFileName, deptFileName, queryFileName);

    Employee EmpList[SIZE_EMP];
    Dept DeptList[SIZE_DEPT];
    int total_emp = readEmp(EmpList, empFileName);
    int total_dept;
    readDept(DeptList, &total_dept, deptFileName);
    printAll(EmpList, total_emp, DeptList, total_dept);

    printf("Query Phase \n");
    FILE *qf = fopen(queryFileName, "r");
    int numQueries;
    fscanf(qf, "%d", &numQueries);

    for (int q = 0; q < numQueries; q++) {
        int query;
        char qstr[100];
        fscanf(qf, "%d %s", &query, qstr);
        if (query == 1) {
            search_employee(EmpList, total_emp, DeptList, total_dept, qstr);
        } else if (query == 2) {
            int totalSal = totalSal_dept(EmpList, total_emp, DeptList, total_dept, qstr);
            printf("Total Salary of Department %s is %d\n", qstr, totalSal);
        }
    }

    fclose(qf);
    return 0;
}
