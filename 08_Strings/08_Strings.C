    #include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void stringBasics(void);
void stringInput(void);
void stringLibraryFunctions(void);
void stringManipulation(void);
void stringComparison(void);
void stringConcatenation(void);
void stringCase(void);

// Function to demonstrate string basics
void stringBasics() {
    printf("\n===== 1. STRING BASICS =====\n");
    
    // String declaration and initialization
    char str1[] = "Hello";
    char str2[20] = "World";
    char str3[50];
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    // String length
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));
    
    // Character array vs String
    char charArray[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Character Array: %s\n", charArray);
}

// Function to demonstrate string input
void stringInput() {
    printf("\n===== 2. STRING INPUT =====\n");
    
    char name[50];
    char description[100];
    
    // Using scanf (stops at whitespace)
    printf("Enter your name (single word): ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    
    // Clear input buffer
    while(getchar() != '\n');
    
    // Using fgets (can read spaces)
    printf("Enter a description: ");
    fgets(description, sizeof(description), stdin);
    printf("Your description: %s", description);
}

// Function to demonstrate string library functions
void stringLibraryFunctions() {
    printf("\n===== 3. STRING LIBRARY FUNCTIONS =====\n");
    
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];
    
    // String copy
    strcpy(str3, str1);
    printf("strcpy result: %s\n", str3);
    
    // String concatenation
    strcat(str3, " ");
    strcat(str3, str2);
    printf("strcat result: %s\n", str3);
    
    // String comparison
    printf("strcmp result: %d\n", strcmp(str1, str2));
    
    // String length
    printf("strlen of combined string: %lu\n", strlen(str3));
}

// Function to demonstrate string manipulation
void stringManipulation() {
    printf("\n===== 4. STRING MANIPULATION =====\n");
    
    char str[] = "Hello, World!";
    
    // Accessing individual characters
    printf("First character: %c\n", str[0]);
    printf("Last character: %c\n", str[strlen(str)-1]);
    
    // Modifying characters
    str[0] = 'h';
    printf("Modified string: %s\n", str);
    
    // Reversing string manually
    int length = strlen(str);
    char temp;
    for(int i = 0; i < length/2; i++) {
        temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
    printf("Reversed string: %s\n", str);
}

// Function to demonstrate string comparison
void stringComparison() {
    printf("\n===== 5. STRING COMPARISON =====\n");
    
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "apple";
    
    // Using strcmp
    printf("Comparing str1 and str2: %d\n", strcmp(str1, str2));
    printf("Comparing str1 and str3: %d\n", strcmp(str1, str3));
    
    // Custom comparison
    int i = 0;
    while(str1[i] == str3[i] && str1[i] != '\0') {
        i++;
    }
    printf("Custom comparison of str1 and str3: %s\n", 
           (str1[i] == str3[i]) ? "Equal" : "Not Equal");
}

// Function to demonstrate string concatenation
void stringConcatenation() {
    printf("\n===== 6. STRING CONCATENATION =====\n");
    
    char firstName[20] = "John";
    char lastName[20] = "Doe";
    char fullName[40] = "";
    
    // Using strcat
    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    printf("Full name using strcat: %s\n", fullName);
    
    // Manual concatenation
    char result[40] = "";
    int i = 0, j = 0;
    
    // Copy first name
    while(firstName[i] != '\0') {
        result[j] = firstName[i];
        i++;
        j++;
    }
    
    // Add space
    result[j] = ' ';
    j++;
    
    // Copy last name
    i = 0;
    while(lastName[i] != '\0') {
        result[j] = lastName[i];
        i++;
        j++;
    }
    result[j] = '\0';
    
    printf("Full name using manual concatenation: %s\n", result);
}

// Function to demonstrate string case conversion
void stringCase() {
    printf("\n===== 7. STRING CASE CONVERSION =====\n");
    
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    
    // Convert to uppercase
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase: %s\n", str);
    
    // Convert to lowercase
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Lowercase: %s\n", str);
}

int main() {
    printf("STRING DEMONSTRATIONS IN C\n");
    printf("=========================\n");
    
    // 1. String Basics
    stringBasics();
    
    // 2. String Input
    stringInput();
    
    // 3. String Library Functions
    stringLibraryFunctions();
    
    // 4. String Manipulation
    stringManipulation();
    
    // 5. String Comparison
    stringComparison();
    
    // 6. String Concatenation
    stringConcatenation();
    
    // 7. String Case Conversion
    stringCase();
    
    return 0;
}