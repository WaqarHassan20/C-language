#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void oneDimensionalArrays(void);
void twoDimensionalArrays(void);
void arrayOperations(void);
void matrixOperations(void);
void arraySearching(void);
void arraySorting(void);

// Function to demonstrate 1D arrays
void oneDimensionalArrays() {
    printf("\n===== 1. ONE DIMENSIONAL ARRAYS =====\n");
    
    // Array declaration and initialization
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Printing array elements
    printf("Array elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    // Array input from user
    int userArray[3];
    printf("\nEnter 3 numbers:\n");
    for(int i = 0; i < 3; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &userArray[i]);
    }
    
    // Display user input
    printf("You entered:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", userArray[i]);
    }
    printf("\n");
}

// Function to demonstrate 2D arrays
void twoDimensionalArrays() {
    printf("\n===== 2. TWO DIMENSIONAL ARRAYS =====\n");
    
    // 2D array declaration and initialization
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Printing 2D array
    printf("Matrix elements:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Student marks example
    int marks[2][3]; // 2 students, 3 subjects
    printf("\nEnter marks for 2 students in 3 subjects:\n");
    
    // Input marks
    for(int i = 0; i < 2; i++) {
        printf("For Student %d:\n", i + 1);
        for(int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    
    // Calculate and display averages
    for(int i = 0; i < 2; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            sum += marks[i][j];
        }
        float avg = (float)sum / 3;
        printf("Average marks for Student %d: %.2f\n", i + 1, avg);
    }
}

// Function to demonstrate array operations
void arrayOperations() {
    printf("\n===== 3. ARRAY OPERATIONS =====\n");
    
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Sum of elements
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
    
    // Find maximum element
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);
    
    // Reverse array
    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    // Reversing
    for(int i = 0; i < size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
    
    printf("\nReversed array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to demonstrate matrix operations
void matrixOperations() {
    printf("\n===== 4. MATRIX OPERATIONS =====\n");
    
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    
    // Matrix addition
    printf("Matrix Addition:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    // Matrix multiplication
    printf("\nMatrix Multiplication:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

// Function to demonstrate array searching
void arraySearching() {
    printf("\n===== 5. ARRAY SEARCHING =====\n");
    
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Linear search
    int key = 22;
    printf("Linear Search for %d:\n", key);
    
    int found = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Element not found\n");
    }
}

// Function to demonstrate array sorting
void arraySorting() {
    printf("\n===== 6. ARRAY SORTING =====\n");
    
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    // Bubble sort
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\nSorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("ARRAY DEMONSTRATIONS IN C\n");
    printf("========================\n");
    
    // 1. One Dimensional Arrays
    oneDimensionalArrays();
    
    // 2. Two Dimensional Arrays
    twoDimensionalArrays();
    
    // 3. Array Operations
    arrayOperations();
    
    // 4. Matrix Operations
    matrixOperations();
    
    // 5. Array Searching
    arraySearching();
    
    // 6. Array Sorting
    arraySorting();
    
    return 0;
}
