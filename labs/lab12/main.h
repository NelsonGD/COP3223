#define MAXSTD 100  //maximum number of students
#define MAXQZ 10 //maximum number of quizzes
#define MAXLEN 51  //maximum char array size. Max string length is 50.

char getLetterGrade(float score);

int getMaxTotalIdx(float totals[], int n);

void writeData(FILE *out, char ids[][MAXLEN], char names[][MAXLEN],  float totals[], int n);

int lookup(char names[][MAXLEN], char key[MAXLEN], int n);

void strToLower(char s[]);