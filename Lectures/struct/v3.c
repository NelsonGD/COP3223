#include <stdio.h>
#include <ctype.h>
#define MAXLEN 50

struct Book // Define struct
{
  // members of the struct

    char title[MAXLEN+1];
    char author[MAXLEN+1];
    float price;
    int pages;

}b1, b2;

void printmeV3(struct Book *b)
{
    printf("\n%s %s %d %.2f\n", b->title, b->author, b->pages, b->price);

    b->price = 2000; // Now this will actually work because of the use of pointers
}

int main(void)
{
    struct Book b1 = {"Java book", "Java author", 200, 50.5};

    printmeV3(&b1); // passing address of b1 (passing reference)
    
    printf("The price is now: %f\n", b1.price);

    // To see size of structure
    printf("The size of the struct is %u", sizeof(struct Book));

    struct Book b2;
    b2 = b1; // It will copy your struct
}