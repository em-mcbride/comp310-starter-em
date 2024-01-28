#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numbers[5] = {1, 2, 3, 4, 5};
    int sum = 0, n = 5, i;
    double average;

    for (i = 0; i < n; i++){
        sum = sum + numbers[i];
    }
    average = sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %lf\n", average);

    return EXIT_SUCCESS;
}