#include <stdio.h>

#define SIZE 100

struct Queue {
    int data[SIZE];
    int front;
    int rear;
};

void enqueue(struct Queue *q, int value) {
    q->data[++q->rear] = value;
}

int dequeue(struct Queue *q) {
    return q->data[q->front++];
}

int isEmpty(struct Queue *q) {
    return q->front > q->rear;
}

int main() {
    struct Queue q1 = {{0}, 0, -1};
    struct Queue q2 = {{0}, 0, -1};

    struct Queue *temp;
    int choice, value;

    while (1) {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);

            enqueue(&q2, value);

            while (!isEmpty(&q1)) {
                enqueue(&q2, dequeue(&q1));
            }

            temp = q1;
            q1 = q2;
            q2 = *temp;
        }

        else if (choice == 2) {
            if (isEmpty(&q1)) {
                printf("Stack is empty\n");
            }
            else {
                printf("Popped: %d\n", dequeue(&q1));
            }
        }

        else if (choice == 3) {
            break;
        }

        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}