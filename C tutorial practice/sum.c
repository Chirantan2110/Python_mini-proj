#include <stdio.h>

void decToBinary(int n) {
    // Array to store binary digits
    int binaryNum[32]; // Assuming a 32-bit integer, adjust if needed

     int i = 0;
    // if (n == 0) {
    //     printf("Binary: 0\n");
    //     return;
    // }

    while (n > 0) {
        // Storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Printing binary array in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decToBinary(decimal);

    return 0;
}