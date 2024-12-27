#include <stdio.h>

// Function prototypes
int sum(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int OperationDo(int a, int b, int (*operation)(int, int));

int main() {
    int output = OperationDo(10, 5, subtract);
    printf("%d\n", output);
    return 0;
}

// Function definitions
int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0; // Return 0 or handle error as needed
    }
}

int OperationDo(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}