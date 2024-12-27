#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ===== 1. FOR LOOP EXAMPLES =====
    printf("\n1. FOR LOOP EXAMPLES\n");
    printf("===================\n");

    // Basic counting
    printf("Counting from 1 to 5:\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Counting backwards
    printf("\nCounting backwards from 5 to 1:\n");
    for (int i = 5; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Table of a number
    int table_num = 5;
    printf("\nMultiplication table of %d:\n", table_num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", table_num, i, table_num * i);
    }

    // ===== 2. WHILE LOOP EXAMPLES =====
    printf("\n2. WHILE LOOP EXAMPLES\n");
    printf("=====================\n");

    // Sum of digits
    int num = 12345;
    int temp = num;
    int sum = 0;
    printf("\nCalculating sum of digits for %d:\n", num);

    while (temp != 0)
    {
        sum += temp % 10; // Add last digit to sum
        temp = temp / 10; // Remove last digit
    }
    printf("Sum of digits: %d\n", sum);

    // Number guessing game
    printf("\nGuess a number between 1 and 10\n");
    int target = 7;
    int guess;
    int attempts = 0;

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == target)
        {
            printf("Correct! You took %d attempts\n", attempts);
            break;
        }
        else if (guess < target)
        {
            printf("Too low! Try again\n");
        }
        else
        {
            printf("Too high! Try again\n");
        }

        if (attempts >= 5)
        {
            printf("Too many attempts! The number was %d\n", target);
            break;
        }
    }

    // ===== 3. DO-WHILE LOOP EXAMPLES =====
    printf("\n3. DO-WHILE LOOP EXAMPLES\n");
    printf("========================\n");

    // Menu-driven program
    int choice;
    do
    {
        printf("\nMenu:\n");
        printf("1. Print Hello\n");
        printf("2. Print Goodbye\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Hello!\n");
            break;
        case 2:
            printf("Goodbye!\n");
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 3);

    // ===== 4. NESTED LOOPS =====
    printf("\n4. NESTED LOOPS\n");
    printf("==============\n");

    // Pattern printing (Triangle)
    printf("\nTriangle Pattern:\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern printing (Inverted Triangle)
    printf("\nInverted Triangle Pattern:\n");
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Multiplication Tables (1 to 5)
    printf("\nMultiplication Tables (1-5):\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("\nTable of %d:\n", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("-----------------\n");
    }

    // ===== 5. LOOP CONTROL STATEMENTS =====
    printf("\n5. LOOP CONTROL STATEMENTS\n");
    printf("=========================\n");

    // Break statement example
    printf("\nBreak when number is 5:\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            printf("Breaking at 5\n");
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    // Continue statement example
    printf("\nSkip even numbers:\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // ===== 6. PRACTICAL EXAMPLES =====
    printf("\n6. PRACTICAL EXAMPLES\n");
    printf("===================\n");

    // Calculate factorial
    int n = 5;
    int factorial = 1;
    printf("\nCalculating factorial of %d:\n", n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        printf("%d! = %d\n", i, factorial);
    }

    // Fibonacci series
    printf("\nFibonacci Series (first 10 numbers):\n");
    int first = 0, second = 1, next;
    printf("%d %d ", first, second);
    for (int i = 3; i <= 10; i++)
    {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}
