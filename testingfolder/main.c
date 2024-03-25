#include <stdio.h>
#include <ctype.h>

#define MAXCHAR 50

void getData(char arr[], int *n, int counters[26]) {
    printf("How many characters? : ");
    scanf("%d", n);
    
    printf("Enter characters:\n");
    while ((*n)-- > 0) {
        char x;
        while ((x = getchar()) != '\n' && x != EOF) {
            if (isalpha(x)) {
                counters[tolower(x) - 'a']++;
                arr[*n] = tolower(x);
                break;
            }
        }
    }
}

void displayStat(int *c, int total_char) {
    printf("Character statistics:\n");
    for (int i = 0; i < 26; i++) {
        char ch = 'a' + i;
        double percentage = (double)c[i] / total_char * 100;
        printf("%c\t%d\t%.2lf%%\n", ch, c[i], percentage);
    }
}

void reverse(char a[], int size) {
    for (int i = 0; i < size / 2; i++) {
        char temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }
}

void displayArr(char *a, int size) {
    printf("The char array: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", a[i]);
    }
    printf("\n");
}

int main(void) {
    int counters[26];
    char myArr[MAXCHAR];
    int total_char;

    for (int i = 0; i < 26; i++)
        counters[i] = 0;

    getData(myArr, &total_char, counters);
    displayArr(myArr, total_char);
    printf("\n");
    displayStat(counters, total_char);
    reverse(myArr, total_char);
    printf("Array reversed.\n");
    displayArr(myArr, total_char);

    return 0;
}
