#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int info;
    struct node *link;
};

// Initialize the top of the stack
struct node *top = NULL;

// Function to push an element to the stack
void push() {
    int item;
    struct node *tmp;

    printf("Enter value to push: ");
    scanf("%d", &item);

    tmp = (struct node *)malloc(sizeof(struct node));
    if (tmp == NULL) {
        printf("Stack overflow\n");
        return;
    }

    tmp->info = item;
    tmp->link = top;
    top = tmp;

    printf("Item pushed.\n");
}

// Function to pop an element from the stack
void pop() {
    struct node *tmp;

    if (top == NULL) {
        printf("Stack underflow\n");
        return;
    }

    tmp = top;
    printf("Popped item: %d\n", tmp->info);
    top = top->link;
    free(tmp);
}

// Function to display the stack
void display() {
    struct node *ptr = top;

    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack contents:\n");
    while (ptr != NULL) {
        printf("%d\n", ptr->info);
        ptr = ptr->link;
    }
}

// Main function with menu-first structure
int main() {
    int choice;

    while (1) {
        // Show the menu first
        printf("\n====== STACK MENU ======\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Handle the user's choice
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter 1–4.\n");
        }
    }

    return 0;
}