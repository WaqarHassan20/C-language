#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void simpleMallocDemo();
void simpleCallocDemo();
void simpleReallocDemo();

void simpleMallocDemo()
{
    printf("Using malloc to allocate memory for 5 integers.\n");
    int *numbers =
        (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 integers

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    // Assign values to the array
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = i + 1;
    }

    // Print values
    printf("Values in the array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers); // Free the memory
    printf("Memory allocated by malloc is now freed.\n");
}

void simpleCallocDemo()
{
    printf("Using calloc to allocate memory for 5 integers.\n");
    int *numbers = (int *)calloc(
        5, sizeof(int)); // Allocate memory for 5 integers and initialize to 0

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    // Print values
    printf("Values in the array (initialized to 0): ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers); // Free the memory
    printf("Memory allocated by calloc is now freed.\n");
}

void simpleReallocDemo()
{
    printf("Using realloc to resize memory for integers.\n");
    int *numbers =
        (int *)malloc(3 * sizeof(int)); // Allocate memory for 3 integers

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    // Assign values to the array
    for (int i = 0; i < 3; i++)
    {
        numbers[i] = i + 1;
    }

    // Print initial values
    printf("Initial values in the array: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Resize the memory to hold 5 integers
    numbers = (int *)realloc(numbers, 5 * sizeof(int));
    if (numbers == NULL)
    {
        printf("Memory reallocation failed.\n");
        return;
    }

    // Assign values to the new elements
    for (int i = 3; i < 5; i++)
    {
        numbers[i] = i + 1;
    }

    // Print all values
    printf("Values in the resized array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers); // Free the memory
    printf("Memory reallocated by realloc is now freed.\n");
}
int main()
{
    printf("Welcome to Dynamic Memory Management in C!\n");
    printf("=====================================\n\n");

    // Call malloc demo
    printf("1. malloc Demo\n");
    simpleMallocDemo();

    // Call calloc demo
    printf("\n2. calloc Demo\n");
    simpleCallocDemo();

    // Call realloc demo
    printf("\n3. realloc Demo\n");
    simpleReallocDemo();

    printf("\nThank you for exploring dynamic memory management!\n");
    return 0;
}
