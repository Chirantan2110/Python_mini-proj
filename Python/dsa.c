#include <stdio.h>
#include <stdlib.h>


struct node {
    int info;
    struct node *link;
} *start = NULL;


void create_list(int data);
void add_after(int data, int pos);
void delete_node(int data);
void display();

int main() {
    int choice, n, m, position, i;

    while(1) {
        printf("\n===== Singly Linked List Menu =====\n");
        printf("1. Create List\n");
        printf("2. Add After\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("How many nodes do you want: ");
                scanf("%d", &n);
                for(i = 0; i < n; i++) {
                    printf("Enter element %d: ", i + 1);
                    scanf("%d", &m);
                    create_list(m);
                }
                break;

            case 2:
                printf("Enter the element to be added: ");
                scanf("%d", &m);
                printf("Enter the position after which this element is inserted (0-based index): ");
                scanf("%d", &position);
                add_after(m, position);
                break;

            case 3:
                printf("Enter the element to delete: ");
                scanf("%d", &m);
                delete_node(m);
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


void create_list(int data) {
    struct node *temp, *q;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;

    if(start == NULL) {
        start = temp;
    } else {
        q = start;
        while(q->link != NULL)
            q = q->link;
        q->link = temp;
    }

    printf("Element %d added to the list.\n", data);
}


void add_after(int data, int pos) {
    struct node *temp, *q;
    int i;

    q = start;
    for(i = 0; i < pos; i++) {
        if(q == NULL) {
            printf("There are less than %d elements in the list.\n", pos + 1);
            return;
        }
        q = q->link;
    }

    if(q == NULL) {
        printf("Position exceeds list length.\n");
        return;
    }

    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = q->link;
    q->link = temp;

    printf("Element %d inserted after position %d.\n", data, pos);
}


void delete_node(int data) {
    struct node *temp, *prev;

    if(start == NULL) {
        printf("List is empty.\n");
        return;
    }

  
    if(start->info == data) {
        temp = start;
        start = start->link;
        free(temp);
        printf("Element %d deleted.\n", data);
        return;
    }

    prev = start;
    temp = start->link;

    while(temp != NULL) {
        if(temp->info == data) {
            prev->link = temp->link;
            free(temp);
            printf("Element %d deleted.\n", data);
            return;
        }
        prev = temp;
        temp = temp->link;
    }

    printf("Element %d not found in the list.\n", data);
}


void display() {
    struct node *q = start;

    if(start == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("List elements: ");
    while(q != NULL) {
        printf("%d -> ", q->info);
        q = q->link;
    }
    printf("NULL\n");
}