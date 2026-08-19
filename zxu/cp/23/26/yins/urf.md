In this one:
```
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

```
I would assume that front and rear of an empty list would be the same and then as more and more items get queued the rear would get farther and farther away on the number line to a finite degree as it gets incremented while the front would stay put. Dequeuing would simply increment front bringing it closer to the rear, making the queue shorter with every increment, creating more room in the rear to eventually empty the queue and bring them back together.
When The rear is less than the front the queue is empty and when they are equal there is one item in the array at index 0 because that is what we get when we increment the rear for the first time. We get an item at the rear which is also the element in the rear but then as we enqueue another element we get another element at the rear but data[0] remains the at front while more elements get enqueued in the rear.
The array however can contain 3 or more elements while the queue contains 2 or less because as we dequeue the front advances removing the item at index 0, 1 and so on.
```
scanf("%d", &value);

```