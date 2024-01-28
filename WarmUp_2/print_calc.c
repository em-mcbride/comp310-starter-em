#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    //print Sum: , Difference:, Product:, Quotient: one separate lines
    double num1, num2, add, sub, mult, div; //initialize variables (necessary?)
    
    printf("Enter first number: \n");
    //could have have error check here
    scanf("%lf", &num1); //%lf for double
    
    printf("Enter second number: \n");
    //could have have error check here
    scanf("%lf", &num2);

    add = num1 + num2;
    printf("Sum: %lf\n", add);

    sub = num1-num2;
    printf("Difference: %lf\n", sub);

    mult = num1*num2;
    printf("Product: %lf\n", mult);

    div = num1/num2;
    printf("Quotient: %lf\n", div);
    
    return EXIT_SUCCESS;
}