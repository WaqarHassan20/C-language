#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to demonstrate file writing
void write_to_file()
{
    FILE *file;

    // Open file in write mode
    file = fopen("beginner_write.txt", "w");

    // Check if file opened successfully
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return;
    }

    // Write some text to the file
    fprintf(file, "Hello, this is a simple file writing example!\n");
    fprintf(file, "Learning file handling can be fun and easy.\n");

    // Close the file
    fclose(file);
    printf("File writing completed successfully.\n");
}

// Function to demonstrate file reading
void read_from_file()
{
    FILE *file;
    char buffer[100];

    // Open file in read mode
    file = fopen("beginner_write.txt", "r");

    // Check if file opened successfully
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        return;
    }

    // Read and print file contents
    printf("File Contents:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);
}

// Function to demonstrate file appending
void append_to_file()
{
    FILE *file;

    // Open file in append mode
    file = fopen("beginner_write.txt", "a");

    // Check if file opened successfully
    if (file == NULL)
    {
        printf("Error opening file for appending!\n");
        return;
    }

    // Append new text to the file
    fprintf(file, "This line was appended to the existing file.\n");
    fprintf(file, "Appending allows adding content without overwriting.\n");

    // Close the file
    fclose(file);
    printf("File appending completed successfully.\n");
}

int main()
{
    // Demonstrate file operations
    write_to_file();  // First, write to a file
    read_from_file(); // Then, read the file contents
    append_to_file(); // Finally, append to the file
    read_from_file(); // Read again to show appended content

    return 0;
}