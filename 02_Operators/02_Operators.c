#include <stdio.h>

int main() {
    // ===== 1. ARITHMETIC OPERATORS =====
    printf("1. ARITHMETIC OPERATORS\n");
    int a = 10, b = 3;
    // Basic arithmetic operations
    printf("Given: a = %d, b = %d\n", a, b);
    printf("Addition (a + b): %d\n", a + b);        // Addition
    printf("Subtraction (a - b): %d\n", a - b);     // Subtraction
    printf("Multiplication (a * b): %d\n", a * b);  // Multiplication
    printf("Division (a / b): %d\n", a / b);        // Division (integer)
    printf("Modulus (a %% b): %d\n", a % b);        // Remainder
    
    // ===== 2. ASSIGNMENT OPERATORS =====
    printf("\n2. ASSIGNMENT OPERATORS\n");
    int x = 5;                  // Simple assignment
    printf("Initial x = %d\n", x);
    
    x += 3;                     // Same as: x = x + 3
    printf("After x += 3: %d\n", x);
    
    x -= 2;                     // Same as: x = x - 2
    printf("After x -= 2: %d\n", x);
    
    x *= 4;                     // Same as: x = x * 4
    printf("After x *= 4: %d\n", x);
    
    x /= 3;                     // Same as: x = x / 3
    printf("After x /= 3: %d\n", x);
    
    x %= 3;                     // Same as: x = x % 3
    printf("After x %%= 3: %d\n", x);
    
    // ===== 3. INCREMENT/DECREMENT OPERATORS =====
    printf("\n3. INCREMENT/DECREMENT OPERATORS\n");
    int count = 5;
    printf("Initial count = %d\n", count);
    
    // Pre-increment: increment first, then use the value
    printf("++count: %d\n", ++count);    // count is now 6
    
    // Post-increment: use value first, then increment
    printf("count++: %d\n", count++);    // prints 6, then count becomes 7
    printf("After post-increment: %d\n", count);
    
    // Pre-decrement: decrement first, then use the value
    printf("--count: %d\n", --count);    // count becomes 6
    
    // Post-decrement: use value first, then decrement
    printf("count--: %d\n", count--);    // prints 6, then count becomes 5
    printf("After post-decrement: %d\n", count);
    
    // ===== 4. COMPARISON OPERATORS =====
    printf("\n4. COMPARISON OPERATORS\n");
    int p = 5, q = 10;
    printf("Given: p = %d, q = %d\n", p, q);
    
    // These will print 1 for true, 0 for false
    printf("Equal to (p == q): %d\n", p == q);
    printf("Not equal to (p != q): %d\n", p != q);
    printf("Greater than (p > q): %d\n", p > q);
    printf("Less than (p < q): %d\n", p < q);
    printf("Greater than or equal to (p >= q): %d\n", p >= q);
    printf("Less than or equal to (p <= q): %d\n", p <= q);
    
    // ===== 5. LOGICAL OPERATORS =====
    printf("\n5. LOGICAL OPERATORS\n");
    int isTrue = 1, isFalse = 0;
    
    // Logical AND (&&)
    printf("true && true: %d\n", isTrue && isTrue);
    printf("true && false: %d\n", isTrue && isFalse);
    
    // Logical OR (||)
    printf("true || false: %d\n", isTrue || isFalse);
    printf("false || false: %d\n", isFalse || isFalse);
    
    // Logical NOT (!)
    printf("!true: %d\n", !isTrue);
    printf("!false: %d\n", !isFalse);
    
    // ===== 6. BITWISE OPERATORS =====
    printf("\n6. BITWISE OPERATORS\n");
    unsigned int num1 = 60;    // 60 = 0011 1100 in binary
    unsigned int num2 = 13;    // 13 = 0000 1101 in binary
    
    printf("Given: num1 = %u, num2 = %u\n", num1, num2);
    printf("Bitwise AND (&): %u\n", num1 & num2);
    printf("Bitwise OR (|): %u\n", num1 | num2);
    printf("Bitwise XOR (^): %u\n", num1 ^ num2);
    printf("Bitwise NOT (~) of num1: %u\n", ~num1);
    printf("Left shift (num1 << 2): %u\n", num1 << 2);
    printf("Right shift (num1 >> 2): %u\n", num1 >> 2);
    
    // ===== 7. CONDITIONAL (TERNARY) OPERATOR =====
    printf("\n7. CONDITIONAL OPERATOR\n");
    int age = 20;
    printf("Age = %d\n", age);
    
    // Syntax: condition ? value_if_true : value_if_false
    printf("Status: %s\n", age >= 18 ? "Adult" : "Minor");
    
    return 0;
}
