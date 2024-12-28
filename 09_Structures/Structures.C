#include <stdio.h>
#include <string.h>

// Basic structure definition
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

// Structure with nested structure
struct Address {
    char street[50];
    char city[30];
    char country[30];
};

struct Employee {
    int id;
    char name[50];
    struct Address addr;    // Nested structure
    float salary;
};

// Structure using typedef
typedef struct {
    char title[100];
    char author[50];
    int pages;
    float price;
} Book;

// Function prototypes
void basicStructureDemo(void);
void nestedStructureDemo(void);
void structureArrayDemo(void);
void structurePointerDemo(void);
void bookLibraryDemo(void);

// Function to demonstrate basic structure usage
void basicStructureDemo() {
    printf("\n===== 1. BASIC STRUCTURE USAGE =====\n");
    
    // Structure variable declaration and initialization
    struct Student student1 = {101, "John Doe", 85.5};
    
    // Accessing structure members using dot operator
    printf("Student Details:\n");
    printf("Roll No: %d\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);
    
    // Modifying structure members
    student1.marks = 90.5;
    printf("Updated marks: %.2f\n", student1.marks);
}

// Function to demonstrate nested structures
void nestedStructureDemo() {
    printf("\n===== 2. NESTED STRUCTURES =====\n");
    
    struct Employee emp = {
        1001,
        "Jane Smith",
        {"123 Main St", "New York", "USA"},
        75000.0
    };
    
    printf("Employee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Address: %s, %s, %s\n", 
           emp.addr.street,
           emp.addr.city,
           emp.addr.country);
    printf("Salary: %.2f\n", emp.salary);
}

// Function to demonstrate structure arrays
void structureArrayDemo() {
    printf("\n===== 3. STRUCTURE ARRAYS =====\n");
    
    struct Student class[3] = {
        {101, "Alice", 85.5},
        {102, "Bob", 78.0},
        {103, "Charlie", 92.5}
    };
    
    printf("Class Details:\n");
    for(int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll No: %d\n", class[i].rollNo);
        printf("Name: %s\n", class[i].name);
        printf("Marks: %.2f\n", class[i].marks);
    }
}

// Function to demonstrate structure pointers
void structurePointerDemo() {
    printf("\n===== 4. STRUCTURE POINTERS =====\n");
    
    struct Student student = {104, "David", 88.5};
    struct Student *ptr = &student;
    
    // Accessing members using pointer
    printf("Using pointer:\n");
    printf("Roll No: %d\n", ptr->rollNo);    // Arrow operator
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
}

// Function to demonstrate typedef structure
void bookLibraryDemo() {
    printf("\n===== 5. TYPEDEF STRUCTURE =====\n");
    
    // Using typedef structure
    Book book1 = {"C Programming", "Dennis Ritchie", 750, 29.99};
    Book library[2] = {
        {"Data Structures", "Author 1", 500, 24.99},
        {"Algorithms", "Author 2", 600, 27.99}
    };
    
    printf("Book Details:\n");
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Pages: %d\n", book1.pages);
    printf("Price: $%.2f\n", book1.price);
    
    printf("\nLibrary Books:\n");
    for(int i = 0; i < 2; i++) {
        printf("\nBook %d:\n", i+1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Pages: %d\n", library[i].pages);
        printf("Price: $%.2f\n", library[i].price);
    }
}

int main() {
    printf("STRUCTURE DEMONSTRATIONS IN C\n");
    printf("============================\n");
    
    // 1. Basic Structure Usage
    basicStructureDemo();
    
    // 2. Nested Structures
    nestedStructureDemo();
    
    // 3. Structure Arrays
    structureArrayDemo();
    
    // 4. Structure Pointers
    structurePointerDemo();
    
    // 5. Typedef Structure
    bookLibraryDemo();
    
    return 0;
}