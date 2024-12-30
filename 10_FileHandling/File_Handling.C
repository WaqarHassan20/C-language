#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void writeFileDemo(void);
void readFileDemo(void);
void appendFileDemo(void);
void fseekDemo(void);
void binaryFileDemo(void);
void fileErrorHandling(void);

// Structure for binary file demo
struct Student
{
    int id;
    char name[50];
    float gpa;
};

// Function to demonstrate writing to a file
void writeFileDemo()
{
    printf("\n===== 1. WRITING TO FILE DEMONSTRATION =====\n");

    // Opening file in write mode
    FILE *file = fopen("sample.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return;
    }

    // Writing text using fprintf
    fprintf(file, "Hello, This is line 1\n");
    fprintf(file, "This is line 2\n");

    // Writing text using fputs
    fputs("This is line 3 using fputs\n", file);

    // Writing single characters using fputc
    fputc('A', file);
    fputc('\n', file);

    printf("Data written to file successfully!\n");

    // Always close the file
    fclose(file);
}

// Function to demonstrate reading from a file
void readFileDemo()
{
    printf("\n===== 2. READING FROM FILE DEMONSTRATION =====\n");

    FILE *file = fopen("sample.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        return;
    }

    char buffer[100];
    int lineCount = 0;

    printf("File contents:\n");
    printf("-------------\n");

    // Reading line by line using fgets
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("Line %d: %s", ++lineCount, buffer);
    }

    fclose(file);
}

// Function to demonstrate appending to a file
void appendFileDemo()
{
    printf("\n===== 3. APPENDING TO FILE DEMONSTRATION =====\n");

    FILE *file = fopen("sample.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file for appending!\n");
        return;
    }

    // Appending new content
    fprintf(file, "\nAppended line 1\n");
    fprintf(file, "Appended line 2\n");

    printf("Data appended to file successfully!\n");

    fclose(file);
}

// // Function to demonstrate file positioning using fseek
// void fseekDemo()
// {
//     printf("\n===== 4. FILE POSITIONING DEMONSTRATION =====\n");

//     FILE *file = fopen("sample.txt", "r+");
//     if (file == NULL)
//     {
//         printf("Error opening file!\n");
//         return;
//     }

//     // Moving to end of file
//     fseek(file, 0, SEEK_END);
//     long size = ftell(file);
//     printf("File size: %ld bytes\n", size);

//     // Moving to beginning of file
//     rewind(file);

//     // Reading first character
//     char ch = fgetc(file);
//     printf("First character: %c\n", ch);

//     // Moving 10 bytes from current position
//     fseek(file, 10, SEEK_CUR);
//     ch = fgetc(file);
//     printf("Character at position 11: %c\n", ch);

//     fclose(file);
// }

// // Function to demonstrate binary file operations
// void binaryFileDemo()
// {
//     printf("\n===== 5. BINARY FILE OPERATIONS DEMONSTRATION =====\n");

//     // Create sample student data
//     struct Student students[] = {
//         {1, "John Doe", 3.8},
//         {2, "Jane Smith", 3.9},
//         {3, "Bob Johnson", 3.7}};

//     // Writing to binary file
//     FILE *file = fopen("students.bin", "wb");
//     if (file == NULL)
//     {
//         printf("Error opening binary file for writing!\n");
//         return;
//     }

//     fwrite(students, sizeof(struct Student), 3, file);
//     fclose(file);

//     // Reading from binary file
//     file = fopen("students.bin", "rb");
//     if (file == NULL)
//     {
//         printf("Error opening binary file for reading!\n");
//         return;
//     }

//     struct Student readStudents[3];
//     fread(readStudents, sizeof(struct Student), 3, file);

//     printf("Student Records:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("ID: %d, Name: %s, GPA: %.2f\n",
//                readStudents[i].id,
//                readStudents[i].name,
//                readStudents[i].gpa);
//     }

//     fclose(file);
// }

// // Function to demonstrate file error handling
// void fileErrorHandling()
// {
//     printf("\n===== 6. FILE ERROR HANDLING DEMONSTRATION =====\n");

//     FILE *file = fopen("nonexistent.txt", "r");
//     if (file == NULL)
//     {
//         perror("Error opening file");
//         printf("Error number: %d\n", ferror(file));
//         return;
//     }

//     // This won't execute if file doesn't exist
//     fclose(file);
// }

// int main()
// {
//     printf("FILE HANDLING DEMONSTRATIONS IN C\n");
//     printf("===============================\n");

//     // 1. Writing to file
//     writeFileDemo();

//     // 2. Reading from file
//     readFileDemo();

//     // 3. Appending to file
//     appendFileDemo();

//     // 4. File positioning
//     fseekDemo();

//     // 5. Binary file operations
//     binaryFileDemo();

//     // 6. Error handling
//     fileErrorHandling();

//     return 0;
// }
