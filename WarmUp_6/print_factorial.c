#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

int main(int argc, char *argv[]) {
    //calculate factorial of a number using recursion
    int number = 5; 
    printf("Factorial of %d is: %d\n", number, factorial(number));
}

