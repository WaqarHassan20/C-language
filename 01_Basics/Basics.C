#include <stdio.h>
#include <stdbool.h> // For boolean data type

int main()
{
    // ===== 1. BASIC DATA TYPES AND VARIABLES =====
    printf("\n1. BASIC DATA TYPES AND VARIABLES\n");
    printf("=====================================\n");

    // Integer types with their sizes
    int regular_int = 42;         // Usually 4 bytes (-2,147,483,648 to 2,147,483,647)
    short small_int = 123;        // Usually 2 bytes (-32,768 to 32,767)
    long large_int = 1234567890L; // Usually 8 bytes
    unsigned int positive = 100;  // Only positive numbers, doubles the range

    // Print sizes of different integer types
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of long: %lu bytes\n", sizeof(long));

    // Floating-point types
    float price = 99.99f;      // Single precision, ~7 decimal digits
    double pi = 3.14159265359; // Double precision, ~15 decimal digits

    // Character types
    char grade = 'A';       // Single character
    char name[50] = "John"; // String (character array)

    // Boolean type (C99 standard)
    bool is_valid = true; // Requires <stdbool.h>

    // Constants
    const int MAX_VALUE = 100; // Value cannot be changed
#define PI 3.14159             // Preprocessor constant

    // ===== 2. FORMATTED OUTPUT =====
    printf("\n2. FORMATTED OUTPUT\n");
    printf("=====================\n");

    // Integer formatting
    printf("Regular int: %d\n", regular_int);
    printf("Padded int (5 spaces): %5d\n", regular_int);
    printf("Zero-padded int: %05d\n", regular_int);

    // Float formatting
    printf("Float (default): %f\n", price);
    printf("Float (2 decimals): %.2f\n", price);
    printf("Float (scientific): %e\n", price);

    // String and character formatting
    printf("Character: %c\n", grade);
    printf("String: %s\n", name);
    printf("Right-aligned string: %20s\n", name);

    // ===== 3. INPUT OPERATIONS =====
    printf("\n3. INPUT OPERATIONS\n");
    printf("===================\n");

    // Integer input
    int user_number;
    printf("Enter a number: ");
    scanf("%d", &user_number);
    printf("You entered: %d\n", user_number);

    // Clear input buffer
    while (getchar() != '\n')
        ;

    // Character input
    char user_char;
    printf("Enter a character: ");
    scanf(" %c", &user_char); // Note the space before %c
    printf("You entered: %c\n", user_char);

    // ===== 4. TYPE CONVERSION =====
    printf("\n4. TYPE CONVERSION\n");
    printf("==================\n");

    // Implicit conversion
    int num1 = 10;
    float num2 = 3.5;
    float result = num1 + num2; // num1 is automatically converted to float
    printf("Implicit conversion: %d + %.1f = %.1f\n", num1, num2, result);

    // Explicit conversion (also called as type casting)
    int sum = (int)(num1 + num2); // Result is truncated to integer
    printf("Explicit conversion: (int)(%.1f) = %d\n", num1 + num2, sum);

    // ===== 5. OPERATORS =====
    printf("\n5. OPERATORS\n");
    printf("============\n");

    int a = 10, b = 3;

    // Arithmetic operators
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    // Increment/Decrement
    int x = 5;
    printf("Original x: %d\n", x);
    printf("Pre-increment: %d\n", ++x);
    printf("Post-increment: %d\n", x++);
    printf("Final x: %d\n", x);

    return 0;
}
