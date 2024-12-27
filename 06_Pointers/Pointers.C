#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void basicPointerDemo(void);
void pointerArithmetic(void);
void arrayPointers(void);
void doublePointers(void);
void functionPointers(int, int);
void dynamicMemory(void);
void swapNumbers(int*, int*);
void modifyArray(int*, int);

// Function to demonstrate basic pointer concepts
void basicPointerDemo() {
    printf("\n===== 1. BASIC POINTER CONCEPTS =====\n");
    
    int num = 42;
    int *ptr = &num;
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr (address it points to): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    
    // Modifying value through pointer
    *ptr = 100;
    printf("Modified value of num through pointer: %d\n", num);
}

// Function to demonstrate pointer arithmetic
void pointerArithmetic() {
    printf("\n===== 2. POINTER ARITHMETIC =====\n");
    
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("Array traversal using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *ptr);
        ptr++;    // Move to next element
    }
    
    // Demonstrating pointer subtraction
    int *start = arr;
    int *end = arr + 4;
    printf("Number of elements between pointers: %ld\n", end - start + 1);
}

// Function to demonstrate array pointers
void arrayPointers() {
    printf("\n===== 3. ARRAY POINTERS =====\n");
    
    int arr[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5] = &arr;    // Pointer to entire array
    
    printf("Accessing array elements through array pointer:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, (*ptr)[i]);
    }
}

// Function to demonstrate double pointers
void doublePointers() {
    printf("\n===== 4. DOUBLE POINTERS =====\n");
    
    int num = 42;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    
    printf("Value of num: %d\n", num);
    printf("Value through single pointer: %d\n", *ptr1);
    printf("Value through double pointer: %d\n", **ptr2);
    
    // Modifying value through double pointer
    **ptr2 = 200;
    printf("Modified value through double pointer: %d\n", num);
}

// Function pointer example
void functionPointers(int a, int b) {
    printf("\n===== 5. FUNCTION POINTERS =====\n");
    
    // Define function pointer
    void (*funcPtr)(int, int) = &functionPointers;
    printf("Function pointer demonstration with values %d and %d\n", a, b);
    printf("Sum: %d\n", a + b);
}

// Function to demonstrate dynamic memory allocation
void dynamicMemory() {
    printf("\n===== 6. DYNAMIC MEMORY ALLOCATION =====\n");
    
    // Allocate memory for single integer
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 42;
    printf("Dynamically allocated integer: %d\n", *ptr);
    free(ptr);
    
    // Allocate array dynamically
    int size = 5;
    int *arr = (int*)calloc(size, sizeof(int));
    printf("Dynamically allocated array elements:\n");
    for(int i = 0; i < size; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Reallocate memory
    arr = (int*)realloc(arr, (size + 3) * sizeof(int));
    printf("Array after reallocation:\n");
    for(int i = 0; i < size + 3; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
}

// Function to swap two numbers using pointers
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to modify array elements using pointer
void modifyArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        *(arr + i) *= 2;    // Double each element
    }
}

int main() {
    printf("POINTER DEMONSTRATIONS IN C\n");
    printf("==========================\n");
    
    // 1. Basic Pointer Concepts
    basicPointerDemo();
    
    // 2. Pointer Arithmetic
    pointerArithmetic();
    
    // 3. Array Pointers
    arrayPointers();
    
    // 4. Double Pointers
    doublePointers();
    
    // 5. Function Pointers
    functionPointers(10, 20);
    
    // 6. Dynamic Memory Allocation
    dynamicMemory();
    
    // 7. Practical Applications
    printf("\n===== 7. PRACTICAL APPLICATIONS =====\n");
    
    // Swap numbers
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swapNumbers(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    
    // Modify array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("\nArray before modification: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    modifyArray(arr, size);
    
    printf("\nArray after modification: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
