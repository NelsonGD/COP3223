#include <stdio.h>

int main() {
    int num;
    int positive_count = 0, negative_count = 0, zero_count = 0;

    printf("Input the number:\n");
    
    // loops takes input until -100
    while (1) {
        scanf("%d", &num);
        
        // if input is -100 break out of loop
        if (num == -100) {
            break;
        }
        
        // update count based on input
        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    
    // display counts
    printf("Number of positive numbers: %d\n", positive_count);
    printf("Number of Negative numbers: %d\n", negative_count);
    printf("Number of Zero: %d\n", zero_count);

    return 0;
}
