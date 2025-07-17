#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to print the linked list
void abhi(struct Node *ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    // Allocate memory for nodes
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and connect nodes
    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 11;
    third->next = NULL;

    // Print the list
    abhi(head);

    return 0;
}
