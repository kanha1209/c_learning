#include <stdio.h> // Include a library that provides input/output functions

// By default C runs main function from compiler
int main() {
    char name[100]; // Declare a variable named 'name' that can hold up to 99 characters plus a null terminator

    printf("Enter your name: "); // Print a message asking for input

    scanf("%s", name); // Read a string of characters (input) and store it in the 'name' variable

    printf("Hello, %s!\n", name); // Print a greeting message with the entered name

    return 0; // Indicate that the program has completed successfully
}
