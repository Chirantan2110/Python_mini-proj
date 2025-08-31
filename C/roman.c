#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to convert integer to Roman numeral
void intToRoman(int num) {
    // Arrays of Roman symbols and their corresponding integer values
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L",
                             "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            printf("%s", symbols[i]);
            num -= values[i];
        }
    }
    printf("\n");
}

// Function to check if a string is a valid integer
int isValidInteger(const char *str) {
    if (*str == '\0') return 0; // Empty string
    if (*str == '-' || *str == '+') str++; // Optional sign
    if (*str == '\0') return 0; // Only a sign, no digits

    while (*str) {
        if (!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

int main() {
    char input[100];

    printf("Enter an integer between 1 and 1000: ");
    if (!fgets(input, sizeof(input), stdin)) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Remove trailing newline if present
    input[strcspn(input, "\n")] = '\0';

    if (!isValidInteger(input)) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    int number = atoi(input);
    if (number < 1 || number > 1000) {
        printf("Invalid input. Please enter a number between 1 and 1000.\n");
        return 1;
    }

    intToRoman(number);
    return 0;
}
