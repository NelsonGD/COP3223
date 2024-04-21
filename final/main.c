Sure, here's the code formatted with each line on a separate line:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Prototype
void readFileStudents(char fileName[1000]);
void readFileEnrollment(char fileName[1000]);
void readFileCourses(char fileName[1000]);
char calculateGrade(float num);
void printResult(int i);
void printCourse(int i);

// Definition of Student Structure
struct Student {
    int id;
    char fname[80];
    char lname[80];
    int day;
    int month;
    int year;
};

// end struct Student
struct Student students[50];

// Definition of Enrollment Structure
struct Enrollment {
    int stud_id;
    char course_id[5];
    char semester[20];
    float score;
};

// end struct Enrollment
struct Enrollment enroll[50];

// Definition of Course Structure
struct Course {
    char course_id[5];
    char course_name[20];
    float credit;
};

// end struct Course
struct Course courses[50];

void substring(char str[], char sub[], int p, int l) {
    int c = 0;
    while (c < l) {
        sub[c] = str[p + c - 1];
        c++;
    }
    sub[c] = '\0';
}

int main() {
    char *fileName = "students.txt";
    readFileStudents(fileName);
    readFileEnrollment("enrollment.txt");
    readFileCourses("courses.txt");
    while (1) {
        char option[100];
        printf("\n");
        scanf(" %[^\n]%*c", option);
        if ((option[0] == 's') && (option[1] == 'o')) {
            int arr[8];
            for (int i = 0; i < 8; i++) {
                arr[i] = students[i].id;
            }
            for (int i = 0; i < 7; i++) {
                for (int j = i + 1; j < 8; j++) {
                    if (arr[i] > arr[j]) {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    if (arr[i] == students[j].id) {
                        int index = j;
                        printf("\n%d %s %s %d/%d/%d", students[index].id, students[index].fname, students[index].lname, students[index].month, students[index].day, students[index].year);
                    }
                }
            }
            printf("\n");
        } else if ((option[0] == 's') && (option[7] == 's')) {
            char lname[50];
            char fname[50];
            int id;
            int byear;
            if (option[16] == 'l') {
                int c = 0;
                int l = strlen(option) - 21;
                while (c < l) {
                    lname[c] = option[23 + c - 1];
                    c++;
                }
                printf("-----------");
                int index = -1;
                for (int i = 0; i < 10; i++) {
                    if (strcmp(lname, students[i].lname) == 0) {
                        index = i;
                        printResult(index);
                    }
                }
                if (index == -1) {
                    printf("\nnot found");
                    printf("\n-----------");
                }
                printf("\n===========");
            } else if (option[16] == 'f') {
                int c = 0;
                int l = strlen(option) - 21;
                while (c < l) {
                    fname[c] = option[23 + c - 1];
                    c++;
                }
                printf("-----------");
                int index = -1;
                for (int i = 0; i < 10; i++) {
                    if (strcmp(fname, students[i].fname) == 0) {
                        index = i;
                        printResult(index);
                    }
                }
                if (index == -1) {
                    printf("\nnot found");
                    printf("\n-----------");
                }
                printf("\n===========");
            } else if (option[16] == 'i') {
                int c = 0;
                char ids[20];
                int l = strlen(option) - 18;
                while (c < l) {
                    ids[c] = option[20 + c - 1];
                    c++;
                }
                id = atoi(ids);
                printf("-----------");
                int index = -1;
                for (int i = 0; i < 10; i++) {
                    if (students[i].id == id) {
                        index = i;
                        printResult(index);
                    }
                }
                if (index == -1) {
                    printf("\nnot found");
                    printf("\n-----------");
                }
                printf("\n===========");
            } else if (option[16] == 'b') {
                int c = 0;
                char ids[20];
                int l = strlen(option) - 21;
                while (c < l) {
                    ids[c] = option[23 + c - 1];
                    c++;
                }
                byear = atoi(ids);
                printf("-----------");
                int index = -1;
                for (int i = 0; i < 10; i++) {
                    if (students[i].year == byear) {
                        index = i;
                        printResult(index);
                    }
                }
                if (index == -1) {
                    printf("\nnot found");
                    printf("\n-----------");
                }
                printf("\n===========\n");
            }
        } else if (option[0] == 'e') {
            printf("\n-----------");
            printf("\nBye!");
            break;
        } else if ((option[0] == 's') && (option[7] == 'c')) {
            char cid[5];
            char semester[20];
            char c2[20];
            int c = 0;
            int l = 12;
            while (c < l) {
                c2[c] = option[15 + c - 1];
                c++;
            }
            if (strcmp(c2, "cid_semester") == 0) {
                c = 0;
                l = 2;
                while (c < l) {
                    cid[c] = option[28 + c - 1];
                    c++;
                }
                cid[c] = '\0';
                c = 0;
                l = strlen(option) - 29;
                while (c < l) {
                    semester[c] = option[31 + c - 1];
                    c++;
                }
                printf("-----------");
                int index = -1;
                int cIndex = 0;
                int eIndex = 0;
                for (int j = 0; j < 10; j++) {
                    if (strcmp(cid, courses[j].course_id) == 0) {
                        cIndex = j;
                    }
                }
                printf("\n%s %d", courses
                ```c
[cIndex].course_name, (int)courses[cIndex].credit);
                for (int i = 0; i < 15; i++) {
                    if ((strcmp(semester, enroll[i].semester) == 0) && (strcmp(cid, enroll[i].course_id) == 0)) {
                        eIndex = i;
                        index++;
                        for (int k = 0; k < 10; k++) {
                            if (students[k].id == enroll[eIndex].stud_id) {
                                char grade = calculateGrade(enroll[eIndex].score);
                                printf("\n%s %s %s %d %c", students[k].fname, students[k].lname, enroll[eIndex].semester, (int)enroll[eIndex].score, grade);
                            }
                        }
                    }
                }
                if (index == -1) {
                    printf("\nnot found");
                }
                printf("\n-----------");
            } else if (option[14] == 'c' && option[17] == ' ') {
                int c = 0;
                int l = strlen(option) - 17;
                while (c < l) {
                    cid[c] = option[19 + c - 1];
                    c++;
                }
                printf("-----------");
                int index = -1;
                for (int i = 0; i < 10; i++) {
                    if (strcmp(cid, courses[i].course_id) == 0) {
                        index = i;
                        printCourse(index);
                    }
                }
                if (index == -1) {
                    printf("\nnot found");
                    printf("\n-----------");
                }
                printf("\n===========");
            }
        } else if (option[0] == 'a') {
            char course_id[5];
            char course_name[20];
            float credit;
            int c = 0;
            int l = 2;
            while (c < l) {
                course_id[c] = option[12 + c - 1];
                c++;
            }
            course_id[c] = '\0';
            c = 0;
            int l2 = 0;
            for (int j = 14; j < strlen(option); j++) {
                course_name[c] = option[j];
                if (option[j] == ' ') {
                    l2 = j;
                    break;
                }
                c++;
            }
            course_name[c] = '\0';
            c = 0;
            l = strlen(option) - l2;
            char temp[20];
            while (c < l) {
                temp[c] = option[(l2 + 2) + c - 1];
                c++;
            }
            credit = atof(temp);
            printf("-----------");
            int index = -1;
            for (int i = 0; i < 10; i++) {
                if (strcmp(course_id, courses[i].course_id) == 0) {
                    index = i;
                    printf("\nViolation of course id uniqueness. cannot add the record.");
                    printf("\n-----------");
                    break;
                }
            }
            if (index == -1) {
                FILE *fp;
                fp = fopen("courses.txt", "a");
                fprintf(fp, "%s %s %f", course_id, course_name, credit);
                fclose(fp);
                readFileCourses("courses.txt");
                printf("\nrecord added");
                printf("\n-----------");
                printf("\n===========");
            }
        } else if (option[0] == 'c') {
            char type[90];
            int c = 0;
            int l = strlen(option) - 5;
            while (c < l) {
                type[c] = option[7 + c - 1];
                c++;
            }
            if (strcmp(type, "students") == 0) {
                int count = 0;
                for (int i = 0; i < 15; i++) {
                    if (students[i].id != 0) {
                        count++;
                    }
                }
                printf("\n-----------");
                printf("\ntotal students %d", count);
                printf("\n-----------");
            } else if (strcmp(type, "students_course") == 0) {
                printf("\n-----------");
                for (int i = 0; i < 8; i++) {
                    int count = 0;
                    for (int j = 0; j < 15; j++) {
                        if (strcmp(courses[i].course_id, enroll[j].course_id) == 0) {
                            count++;
                        }
                    }
                    if (strlen(courses[i].course_id) != 0) {
                        printf("\n%s %d", courses[i].course_id, count);
                    }
                }
                printf("\n-----------");
            } else if (strcmp(type, "students_semester") == 0) {
                printf("\n-----------");
                int count1 = 0;
                int count2 = 0;
                for (int i = 0; i < 15; i++) {
                    if (strcmp(enroll[i].semester, "fall19") == 0) {
                        count1++;
                    } else if (strcmp(enroll[i].semester, "spring19") == 0) {
                        count2++;
                    }
                }
                printf("\n%s %d", "fall19", count1);
                printf("\n%s %d", "spring19", count2);
                printf("\n-----------");
            }
        }
    }
    return 0;
}

void printCourse(int i) {
    printf("\n%s %d", courses[i].course_name, (int)courses[i].credit);
    int sIndex = -1;
    int eIndex = -1;
    for (int j = 0; j < 15; j++) {
        if (strcmp(enroll[j].course_id, courses[i].course_id) == 0) {
            eIndex = j;
            for (int k = 0; k < 15; k++) {
                if (students[k].id == enroll[eIndex].stud_id) {
                    sIndex = k;
                    char grade = calculateGrade(enroll[eIndex].score);
                    printf("\n%s %s %s %d %c", students[sIndex].fname, students[sIndex].lname, enroll[eIndex].semester, (int)enroll[eIndex].score, grade);
                }
            }
        }
    }
    printf("\n-----------");
}

void printResult(int index) {
    printf("\n%d %s %s %d/%d/%d", students[index].id, students[index].fname, students[index].lname, students[index].month, students[index].day, students[index].year);
    int cindex = 0;
    int k = 0;
    for (int i = 0; i < 15; i++) {
        if (students[index].id == enroll[i].stud_id) {
            k = i;
            for (int j = 0; j < 15; j++) {
                if (strcmp(courses[j].course_id, enroll[k].course_id) == 0) {
                    cindex = j;
                }
            }
            char grade = calculateGrade(enroll[k].score);
            printf```c
("\n%s %s %s %d %c", enroll[k].course_id, courses[cindex].course_name, enroll[k].semester, (int)enroll[k].score, grade);
            }
        }
    }
    printf("\n-----------");
}

char calculateGrade(float n) {
    char c;
    if (n >= 90) {
        c = 'A';
    } else if (n >= 80 && n <= 89.99) {
        c = 'B';
    } else if (n >= 70 && n <= 79.99) {
        c = 'C';
    } else if (n >= 60 && n <= 69.99) {
        c = 'D';
    } else {
        c = 'F';
    }
    return c;
}

void readFileEnrollment(char fileName[1000]) {
    FILE *filePtr; // declare file pointer
    int stud_id = 0;
    float score = 0.0;
    int position = 0;
    filePtr = fopen(fileName, "r");
    while (fscanf(filePtr, "%d %s %s %f", &stud_id, enroll[position].course_id, enroll[position].semester, &score) != EOF) // read values
    {
        enroll[position].stud_id = stud_id;
        enroll[position].score = score;
        position++;
    } // end while
    fclose(filePtr);
} // end void readFile()

void readFileCourses(char fileName[1000]) {
    FILE *filePtr; // declare file pointer
    float credit = 0.0;
    int position = 0;
    filePtr = fopen(fileName, "r");
    while (fscanf(filePtr, "%s %s %f", courses[position].course_id, courses[position].course_name, &credit) != EOF) // read values
    {
        courses[position].credit = credit;
        position++;
    } // end while
    fclose(filePtr);
} // end void readFile()

void readFileStudents(char fileName[1000]) {
    FILE *filePtr; // declare file pointer
    int id = 0;
    char fname[80];
    char lname[80];
    int day = 0;
    int month = 0;
    int year = 0;
    int position = 0;
    filePtr = fopen(fileName, "r");
    while (fscanf(filePtr, "%d %s %s %d %d %d", &id, students[position].fname, students[position].lname, &day, &month, &year) != EOF) // read values
    {
        students[position].id = id;
        students[position].day = day;
        students[position].month = month;
        students[position].year = year;
        position++;
    } // end while
    fclose(filePtr);
} // end void readFile()