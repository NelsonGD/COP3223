#include <stdio.h>
#include <string.h>
#define MAXLEN 50

struct Book // Define struct
{
  // members of the struct

    char title[MAXLEN+1];
    char author[MAXLEN+1];
    float price;
    int pages;

}b1, b2;

// You can also use a pointer, Ex: *t OR *a; to take the strings.
void printmeV1(char t[], char a[], int pages, float price)
{
  printf("\n%s %s %d %.2f\n", t, a, pages, price); // Doesn't know about structure unless passed
}

void printmeV2(struct Book b)
{
  printf("\n%s %s %d %.2f\n", b.title, b.author, b.page, b.price);

  b.price = 2000; // Attempting to change price
  /*
  Price wouldn't change because structures are pass by value.
  This means you are just copying information from b to b1 box, so whatever happens in b box doesn't
  happen in b1 box.
  */
}

int main(void)
{
    struct Book b1 = {"Java book", "Java author", 200, 50.5};

    printmeV1(b1.title, b1.author, b1.pages, b1.price); // This allows the the function to know about structure

    // Defining variable of the struct
    // struct Book b3 = {"C book", "C author", 50.45, 200}; 

    // printf("Book 3: \nTitle: %s \nAuthor: %s \nPage: %d\n Price: %0.2f\n===\n", b3.title, b3.author, b3.pages, b3.price);

    // strcpy(b1.title, "java book"); 

    // struct Book b4;
    // printf("Enter Book 4 title: ");
    // scanf("%[^\n]s", b4.title);

    // char x;
    // while((x = getchar() != '\n') && x != EOF);

    // printf("Enter Book 4 Author: ");
    // scanf("%[^\n]s", b4.author);

    // printf("Enter Book 4 Author: ");
    // scanf("%f", &b4.price);

    // printf("Enter Book 4 Pages: ");
    // scanf("%d", &b4.pages);

    return 0;
}