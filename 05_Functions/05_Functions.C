#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function prototypes
void printGreeting(void);
int sum(int a, int b);
float average(int arr[], int size);
void swap(int *a, int *b);
int factorial(int n);
bool isPrime(int num);
void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);
int binarySearch(int arr[], int size, int key);
void generateFibonacci(int terms);

// ===== 1. BASIC FUNCTION EXAMPLES =====

// Simple function with no parameters and no return value
void printGreeting(void)
{
    printf("Hello! Welcome to Functions in C\n");
}

// Function with parameters and return value
int sum(int a, int b)
{
    return a + b;
}

// Function working with arrays
float average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (float)sum / size;
}

// ===== 2. CALL BY REFERENCE EXAMPLE =====

// Function that swaps two numbers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ===== 3. RECURSIVE FUNCTIONS =====

// Recursive function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// ===== 4. MATHEMATICAL FUNCTIONS =====

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// ===== 5. ARRAY MANIPULATION FUNCTIONS =====

// Function to print array elements
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to sort array using bubble sort
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform binary search
int binarySearch(int arr[], int size, int key)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Element not found
}

// ===== 6. SEQUENCE GENERATION =====

// Function to generate Fibonacci sequence
void generateFibonacci(int terms)
{
    int first = 0, second = 1;

    printf("Fibonacci Sequence (%d terms):\n", terms);
    for (int i = 0; i < terms; i++)
    {
        printf("%d ", first);
        int next = first + second;
        first = second;
        second = next;
    }
    printf("\n"); // escape sequence which means new line
}

int main()
{
    printf("\n===== FUNCTION DEMONSTRATIONS =====\n\n");

    // 1. Basic Function Calls
    printf("1. Basic Functions:\n");
    printGreeting();

    int num1 = 10, num2 = 20;
    printf("Sum of %d and %d is: %d\n", num1, num2, sum(num1, num2));

    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Average of array elements: %.2f\n\n", average(numbers, size));

    // 2. Call by Reference
    printf("2. Call by Reference:\n");
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swap: num1 = %d, num2 = %d\n\n", num1, num2);

    // 3. Recursive Function
    printf("3. Recursive Function:\n");
    int n = 5;
    printf("Factorial of %d is: %d\n\n", n, factorial(n));

    // 4. Mathematical Function
    printf("4. Mathematical Function:\n");
    int testNum = 17;
    printf("%d is %s\n\n", testNum, isPrime(testNum) ? "prime" : "not prime");

    // 5. Array Operations
    printf("5. Array Operations:\n");
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, arrSize);

    bubbleSort(arr, arrSize);
    printf("Sorted array: ");
    printArray(arr, arrSize);

    int searchKey = 25;
    int result = binarySearch(arr, arrSize, searchKey);
    printf("Element %d found at index: %d\n\n", searchKey, result);

    // 6. Sequence Generation
    printf("6. Sequence Generation:\n");
    generateFibonacci(10);

    return 0;
}
