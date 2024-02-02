#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: program <number>\n");
        return 1;
    }

    int number = atoi(argv[1]);

    if (number < 0) {
        fprintf(stderr, "The number must be greater than or equal to zero\n");
        return 1;
    }

    int factorial = 1;
    int b;
    for (b = number; b > 1; b--) {
        factorial *= b;
    }

    printf("The factorial of %d is %d\n", number, factorial);

    int count = 0, index = 1;
    while (index < number) {
        if (number % index == 0) {
            count++;
        }
        index++;
    }

    if (count == 1) {
        printf("%d is a prime number\n", number);
    } else {
        printf("%d is not a prime number\n", number);
    }

    return 0;
}
