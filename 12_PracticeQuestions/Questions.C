#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function prototypes
void numberPatterns(void);
void stringManipulation(void);
void arrayOperations(void);
void mathProblems(void);
void recursionExamples(void);

/*
 * Question 1: Number Pattern Problems
 * - Print various number patterns
 * - Demonstrate nested loops
 * - Show different pattern logic
 */
void numberPatterns() {
    printf("\n===== 1. NUMBER PATTERNS =====\n");
    
    int n = 5;
    
    // Pattern 1: Number Triangle
    printf("\nPattern 1: Number Triangle\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    // Pattern 2: Number Pyramid
    printf("\nPattern 2: Number Pyramid\n");
    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = 1; j <= n-i; j++) {
            printf("  ");
        }
        // Print numbers
        for(int j = 1; j <= 2*i-1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*
 * Question 2: String Manipulation Problems
 * - String reversal
 * - Palindrome check
 * - String concatenation
 * - Character counting
 */
void stringManipulation() {
    printf("\n===== 2. STRING MANIPULATION =====\n");
    
    // String reversal
    char str[] = "Hello World";
    int len = strlen(str);
    printf("Original string: %s\n", str);
    
    printf("Reversed string: ");
    for(int i = len-1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    // Palindrome check
    char palindrome[] = "radar";
    int isPalindrome = 1;
    len = strlen(palindrome);
    
    for(int i = 0; i < len/2; i++) {
        if(palindrome[i] != palindrome[len-1-i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    printf("\nString '%s' is %s palindrome\n", 
           palindrome, 
           isPalindrome ? "a" : "not a");
}

/*
 * Question 3: Array Operations
 * - Array sorting
 * - Finding max/min
 * - Array reversal
 * - Element searching
 */
void arrayOperations() {
    printf("\n===== 3. ARRAY OPERATIONS =====\n");
    
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // Print original array
    printf("Original array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Bubble Sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Print sorted array
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Find max and min
    int max = arr[0], min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

/*
 * Question 4: Math Problems
 * - Prime number check
 * - Factorial calculation
 * - Fibonacci series
 * - GCD calculation
 */
void mathProblems() {
    printf("\n===== 4. MATH PROBLEMS =====\n");
    
    // Prime number check
    int num = 17;
    int isPrime = 1;
    
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    printf("%d is %s prime number\n", 
           num, 
           isPrime ? "a" : "not a");
    
    // Fibonacci series
    int n = 10;
    int first = 0, second = 1;
    
    printf("\nFibonacci Series: ");
    printf("%d %d ", first, second);
    
    for(int i = 2; i < n; i++) {
        int next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}

/*
 * Question 5: Recursion Examples
 * - Factorial using recursion
 * - Fibonacci using recursion
 * - Sum of digits using recursion
 */
int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n-1);
}

int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int sumOfDigits(int n) {
    if(n == 0) return 0;
    return (n % 10) + sumOfDigits(n/10);
}

void recursionExamples() {
    printf("\n===== 5. RECURSION EXAMPLES =====\n");
    
    int n = 5;
    printf("Factorial of %d: %d\n", n, factorial(n));
    
    printf("Fibonacci number at position %d: %d\n", n, fibonacci(n));
    
    int num = 12345;
    printf("Sum of digits in %d: %d\n", num, sumOfDigits(num));
}

int main() {
    printf("C PROGRAMMING PRACTICE QUESTIONS\n");
    printf("==============================\n");
    
    // 1. Number Patterns
    numberPatterns();
    
    // 2. String Manipulation
    stringManipulation();
    
    // 3. Array Operations
    arrayOperations();
    
    // 4. Math Problems
    mathProblems();
    
    // 5. Recursion Examples
    recursionExamples();
    
    return 0;
}
