#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int n, i, value, newValue;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Create the linked list
    for (i = 0; i < n; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    // Sort the linked list in descending order
    struct Node *p, *q;
    int tempData;

    for (p = head; p != NULL; p = p->next) {
        for (q = p->next; q != NULL; q = q->next) {
            if (p->data < q->data) {
                tempData = p->data;
                p->data = q->data;
                q->data = tempData;
            }
        }
    }

    // Display sorted list
    printf("Sorted list in descending order:\n");

    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // Input new integer
    printf("\nEnter a new integer: ");
    scanf("%d", &newValue);

    // Create a new node
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newValue;
    newNode->next = NULL;

    // Insert at beginning if list is empty
    // or new value is greater than the first element
    if (head == NULL || newValue > head->data) {
        newNode->next = head;
        head = newNode;
    } else {
        temp = head;

        while (temp->next != NULL && temp->next->data > newValue) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Display final list
    printf("List after inserting the new integer:\n");

    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}