#include <stdio.h> // For input/output functions like printf
#include <string.h> // For string functions like strlen
#include <ctype.h>  // For character handling functions like toupper and isspace

int main() {
    char name[] = "shah rukh khan"; // The input string. You can change this.
    char initials[10];              // Array to store the initials. Assuming max 9 initials + null terminator.
    int i, j = 0;                   // Loop counters

    printf("Original String: \"%s\"\n", name);

    // Get the first initial
    if (strlen(name) > 0 && isalpha(name[0])) { // Check if the string is not empty and starts with an alphabet
        initials[j++] = toupper(name[0]); // Convert the first character to uppercase and store it
        initials[j++] = '.';              // Add a dot after the first initial
    }

    // Iterate through the rest of the string to find spaces and get subsequent initials
    for (i = 1; i < strlen(name); i++) {
        // If the current character is a space and the next character is an alphabet
        if (isspace(name[i]) && isalpha(name[i+1])) {
            initials[j++] = toupper(name[i+1]); // Convert the character after space to uppercase
            initials[j++] = '.';                  // Add a dot
        }
    }

    initials[j] = '\0'; // Null-terminate the initials string

    printf("Converted Initials: \"%s\"\n", initials);

    return 0; // Indicate successful execution
}
