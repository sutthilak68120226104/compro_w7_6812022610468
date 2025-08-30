#include <stdio.h>

int main() {
    int x, y;

    // Input values
    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter value for y: ");
    scanf("%d", &y);

    // Compare and display result
    if (x > y) {
        printf("x is greater than y\n");
    } else if (x < y) {
        printf("x is less than y\n");
    } else {
        printf("x is equal to y\n");
    }

    return 0;
}