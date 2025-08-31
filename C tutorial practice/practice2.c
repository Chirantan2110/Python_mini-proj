#include <stdio.h> // Required for input/output operations like printf and scanf

#define SIZE 5 // Define the size of the square matrix (5x5)

int main() {
    int matrix[SIZE][SIZE]; // Declare a 2D integer array (5x5 matrix)
    int i, j;               // Loop control variables

    printf("Enter elements for the %dX%d matrix:\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        // Inner loop iterates through columns
        for (j = 0; j < SIZE; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1); // User-friendly prompt (1-based index)
            scanf("%d", &matrix[i][j]); // Read the element and store it in the matrix
        }
    }

    printf("\n--- Original Matrix ---\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]); // Print element followed by a tab
        }
        printf("\n"); // Move to the next line after each row
    }
    printf("\n--- Main Diagonal Elements ---\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", matrix[i][i]); // Print the element at (i, i)
    }
    printf("\n"); // Newline for formatting

    printf("\n--- Secondary Diagonal Elements ---\n");
    for (i = 0; i < SIZE; i++) {
        // The column index j will be (SIZE - 1 - i)
        printf("%d ", matrix[i][SIZE - 1 - i]); // Print the element
    }
    printf("\n"); // Newline for formatting

    return 0; // Indicate successful program execution
}
