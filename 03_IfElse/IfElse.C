#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // ===== 1. BASIC IF STATEMENT =====
    printf("\n1. BASIC IF STATEMENT\n");
    printf("=====================\n");
    
    // Example: Checking if a number is positive
    int number = 5;
    if (number > 0) {
        printf("%d is a positive number\n", number);
    }
    
    // ===== 2. IF-ELSE STATEMENT =====
    printf("\n2. IF-ELSE STATEMENT\n");
    printf("====================\n");
    
    // Example: Checking if a student passed or failed
    int score = 75;
    printf("Student's score: %d\n", score);
    if (score >= 60) {
        printf("Result: PASSED\n");
    } else {
        printf("Result: FAILED\n");
        printf("You must take this course again\n");
    }
    
    // ===== 3. IF-ELSE IF-ELSE LADDER =====
    printf("\n3. IF-ELSE IF-ELSE LADDER\n");
    printf("=========================\n");
    
    // Example: Grade calculation
    int marks = 85;
    printf("Student's marks: %d\n", marks);
    if (marks >= 90) {
        printf("Grade: A (Excellent)\n");
    } else if (marks >= 80) {
        printf("Grade: B (Very Good)\n");
    } else if (marks >= 70) {
        printf("Grade: C (Good)\n");
    } else if (marks >= 60) {
        printf("Grade: D (Pass)\n");
    } else {
        printf("Grade: F (Fail)\n");
    }
    
    // ===== 4. NESTED IF STATEMENTS =====
    printf("\n4. NESTED IF STATEMENTS\n");
    printf("======================\n");
    
    // Example: Number classification (positive/negative and even/odd)
    int num = 14;
    printf("Number to classify: %d\n", num);
    
    if (num != 0) {
        if (num > 0) {
            printf("%d is positive", num);
        } else {
            printf("%d is negative", num);
        }
        
        if (num % 2 == 0) {
            printf(" and even\n");
        } else {
            printf(" and odd\n");
        }
    } else {
        printf("The number is zero\n");
    }
    
    // ===== 5. PRACTICAL EXAMPLES =====
    printf("\n5. PRACTICAL EXAMPLES\n");
    printf("===================\n");
    
    // Example 1: Temperature Classification
    float temp = 25.5;
    printf("\nTemperature: %.1f°C\n", temp);
    if (temp < 0) {
        printf("Status: Freezing\n");
    } else if (temp < 10) {
        printf("Status: Very Cold\n");
    } else if (temp < 20) {
        printf("Status: Cold\n");
    } else if (temp < 30) {
        printf("Status: Normal\n");
    } else if (temp < 40) {
        printf("Status: Hot\n");
    } else {
        printf("Status: Very Hot\n");
    }
    
    // Example 2: Simple Calculator with Error Handling
    float num1 = 10.0, num2 = 0.0;
    char operator = '/';
    
    printf("\nCalculator Example:\n");
    printf("Numbers: %.1f %c %.1f\n", num1, operator, num2);
    
    if (operator == '+') {
        printf("Result: %.1f\n", num1 + num2);
    } else if (operator == '-') {
        printf("Result: %.1f\n", num1 - num2);
    } else if (operator == '*') {
        printf("Result: %.1f\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %.1f\n", num1 / num2);
        } else {
            printf("Error: Division by zero!\n");
        }
    } else {
        printf("Error: Invalid operator!\n");
    }
    
    // Example 3: Number Guessing Game
    printf("\nNumber Guessing Game:\n");
    srand(time(0));  // Initialize random seed
    int target = rand() % 10 + 1;  // Random number between 1 and 10
    int guess;
    
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);
    
    if (guess == target) {
        printf("Congratulations! You guessed correctly!\n");
    } else if (guess < target) {
        printf("Too low! The number was %d\n", target);
    } else {
        printf("Too high! The number was %d\n", target);
    }
    
    // Example 4: Age Category Classifier
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);
    
    if (age < 0) {
        printf("Error: Invalid age!\n");
    } else if (age < 13) {
        printf("Category: Child\n");
    } else if (age < 20) {
        printf("Category: Teenager\n");
    } else if (age < 60) {
        printf("Category: Adult\n");
    } else {
        printf("Category: Senior\n");
    }
    
    return 0;
}