// Nelson Diaz

/*
Program uses two structures. One for employees and another for department. This is a employee management type code.
*/

// pre-processor directice
#include <stdio.h>
#include <string.h>

#define SIZE_EMP 100
#define SIZE_DEPT 50

// declare the structs that we need
typedef struct Employee 
{
    char eid[10];
    char lname[50];
    int sal;
}Employee;

typedef struct Department
{
    char eid[10];
    char dname[50];
}Dept;


int readEmp(Employee ArrayOfEmployees[], char fileName[])
{

    FILE * f_emp = fopen(fileName,"r");

    char eId[10];
    char name[100];
    int salary;
    int empCount = 0;

    while (fscanf(f_emp, "%s %s %d ", eId, name, &salary) != EOF)
    {
        strcpy(ArrayOfEmployees[empCount].eid, eId);
        strcpy(ArrayOfEmployees[empCount].lname, name);
        ArrayOfEmployees[empCount].sal = salary;
        empCount++;
    }
    fclose(f_emp);
    return empCount;
}

// read all departments from file and reference of how many departments
void readDept(Dept ArrayOfDepartments[], int *numOfDept, char fileName[])
{
    FILE * f_dept = fopen(fileName, "r");
    char eId[10];
    char dname[100];

    int deptCount = 0;

    // you guys set up the while loop same strategy as the read employee function
    while(fscanf(f_dept, "%s %s", eId, dname) != EOF)
    {
        // copy the employee id as a string
        strcpy(ArrayOfDepartments[deptCount].eid, eId);
        // copy the department name
        strcpy(ArrayOfDepartments[deptCount].dname, dname);

        deptCount++;
    }

    // close the file
    fclose(f_dept);

    // update the numOfDept
    * numOfDept = deptCount;
}

void printAll(Employee Arr[], int totalEmp, Dept ArrayOfDepartments[], int totalDept)
{
    int i, j;

    printf("Printing the list of Employees: \n=================\n");

    // loop that goes over the employee count
    for(i = 0; i < totalEmp; i++)
    {
        // printf the employee data
        printf("ID: %s\tLName: %s\tSalary: %d", Arr[i].eid, Arr[i].lname, Arr[i].sal);
        for(j = 0; j < totalDept; j++)
        {
            if(strcmp(ArrayOfDepartments[j].eid, Arr[i].eid) == 0)
            {
                printf("\tDepartment: %s", ArrayOfDepartments[j].dname);
                break;
            }
        }

        // if the employee doesn't work for any of the departments we are provided with
        if(j == totalDept)
            printf("\tDepartment: None");
        printf("\n");
    }
}

void search_employee(Employee Arr[], int totalEmp, Dept ArrayOfDepartments[], int totalDept, char qStr[])
{
    int i, j;
    int found = 0; // flag to indicate if employee is found

    // loop through the employee array
    for(i = 0; i < totalEmp; i++)
    {
        // check using strcmp that there is a match between the query string and the current employee name
        if(strcmp(Arr[i].lname, qStr) == 0)
        {
            // print the details of the employee
            printf("ID: %s\tLName: %s\tSalary: %d", Arr[i].eid, Arr[i].lname, Arr[i].sal);
            // use the same loop strategy for department as the prior function
            for(j = 0; j < totalDept; j++)
            {
                if(strcmp(ArrayOfDepartments[j].eid, Arr[i].eid) == 0)
                {
                    printf("\tDepartment: %s\n", ArrayOfDepartments[j].dname);
                    found = 1;
                    break;
                }
            }

        }
    }
    // outside the outer loop
    // if you have i == totalEmp that means you did not find your employee within the array
        // print the "Employee %s Not found\n", qstr
    if(!found)
    {
        printf("Employee %s Not Found \n", qStr);
    }


}

int totalSal_dept(Employee Arr[], int totalEmp, Dept ArrayOfDepartments[], int totalDept, char qStr[])
{
    int totalSalary = 0, i, j;

    // loop through the departments
    for(i = 0; i < totalDept; i++)
    {
        // if you find the department, get the eid and look for that eid in the employee structure and add the salary
        if(strcmp(ArrayOfDepartments[i].dname, qStr) == 0)
        {
            // run a loop over the employee array
            for(j = 0; j < totalEmp; j++)
            {
                // see if you have a match between eid
                if(strcmp(ArrayOfDepartments[i].eid, Arr[j].eid) == 0)
                    // increment the total salary variable with the salary of the current employee
                    {
                        totalSalary += Arr[j].sal;
                    }
            }
            break; // stop iterations when found
        }
    }
    // outside this loop (outer loop)
    return totalSalary;
}

int main(void)
{
    // variable declaration
    char empFileName[51], deptFileName[51], queryFileName[51];
    scanf("%s %s %s", empFileName, deptFileName, queryFileName);

    Employee EmpList[SIZE_EMP];
    Dept DeptList[SIZE_DEPT];
    int total_emp = readEmp(EmpList, empFileName);

    int total_dept;
    // call the read dept function and it takes the reference to toatl_dept so it can store the value there later by reference [you guys need to make this function call]

    printAll(EmpList, total_emp, DeptList, total_dept);

    printf("Query Phase \n");
    FILE * qf = fopen(queryFileName, "r");
    int numQueries;
    fscanf(qf, "%d", &numQueries);

    for(int q = 0; q < numQueries; q++)
    {
        int query;
        char qstr[100];

        fscanf(qf, "%d %s", &query, qstr);

        if(query == 1)
        {
            search_employee(EmpList, total_emp, DeptList, total_dept, qstr);
        } 
        else if(query == 2)
        {
            int totalSal = totalSal_dept(EmpList, total_emp, DeptList, total_dept, qstr);
            printf("Total Salary of Department %s is %d\n", qstr, totalSal);
        }
    }

    fclose(qf);
    return 0;
}