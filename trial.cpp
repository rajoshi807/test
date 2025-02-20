#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void printArray(int arr[], int size);
int add(int a, int b);
void swap(int *x, int *y);
struct Person createPerson(char name[], int age);
void writeToFile(char filename[], char content[]);

// Structure definition
struct Person {
    char name;
    int age;
};

int main() {
    // Variables and data types
    int a = 5, b = 10;
    float pi = 3.14;
    char greeting[] = "Hello, World!";
    
    // Control structures
    if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else {
        printf("%d is not less than %d\n", a, b);
    }

    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    // Functions
    int sum = add(a, b);
    printf("Sum of %d and %d is %d\n", a, b, sum);

    // Arrays
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);

    // Pointers
    int x = 20, y = 30;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    // Structures
    struct Person person = createPerson("Alice", 25);
    printf("Person: %s, Age: %d\n", person.name, person.age);

    // File I/O
    char filename[] = "example.txt";
    char content[] = "This is a sample text.";
    writeToFile(filename, content);

    return 0;
}

// Function definitions
void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int add(int a, int b) {
    return a + b;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

struct Person createPerson(char name[], int age) {
    struct Person person;
    strcpy(person.name, name);
    person.age = age;
    return person;
}

void writeToFile(char filename[], char content[]) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fprintf(file, "%s", content);
    fclose(file);
}
