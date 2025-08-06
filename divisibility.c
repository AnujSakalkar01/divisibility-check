#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 5 == 0 || number % 11 == 0) {
        printf("%d is divisible by 5 or 11.\n", number);
    } else {
        printf("%d is NOT divisible by 5 or 11.\n", number);
    }

    return 0;
}