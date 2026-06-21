#include <iostream>
using namespace std;

#define MAX 100

struct Queue
{
    int arr[MAX];
    int front;
    int rear;
    int count;
};

void createQueue(Queue *q)
{
    q->front = 0;
    q->rear = -1;
    q->count = 0;
}

bool isEmpty(Queue *q)
{
    return q->count == 0;
}

bool isFull(Queue *q)
{
    return q->count == MAX;
}

void enqueue(Queue *q, int value)
{
    if (isFull(q))
    {
        cout << "Queue Overflow\n";
        return;
    }

    q->rear = (q->rear + 1) % MAX;
    q->arr[q->rear] = value;
    q->count++;
}

void dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        cout << "Queue Underflow\n";
        return;
    }

    q->front = (q->front + 1) % MAX;
    q->count--;
}

int frontElement(Queue *q)
{
    if (isEmpty(q))
    {
        cout << "Queue is Empty\n";
        return -1;
    }

    return q->arr[q->front];
}

int rearElement(Queue *q)
{
    if (isEmpty(q))
    {
        cout << "Queue is Empty\n";
        return -1;
    }

    return q->arr[q->rear];
}

int size(Queue *q)
{
    return q->count;
}

int main()
{
    Queue q;
    createQueue(&q);

    cout << "Queue Created Successfully\n\n";

    // Enqueue elements
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    cout << "After Enqueue Operations:\n";
    cout << "Front Element: " << frontElement(&q) << endl;
    cout << "Rear Element: " << rearElement(&q) << endl;
    cout << "Queue Size: " << size(&q) << endl;
    cout << "Is Queue Empty? "
         << (isEmpty(&q) ? "Yes" : "No") << endl;
    cout << "Is Queue Full? "
         << (isFull(&q) ? "Yes" : "No") << endl;

    cout << "\nDequeuing Two Elements...\n";
    dequeue(&q);
    dequeue(&q);

    cout << "Front Element: " << frontElement(&q) << endl;
    cout << "Rear Element: " << rearElement(&q) << endl;
    cout << "Queue Size: " << size(&q) << endl;

    cout << "\nAdding More Elements...\n";
    enqueue(&q, 60);
    enqueue(&q, 70);

    cout << "Front Element: " << frontElement(&q) << endl;
    cout << "Rear Element: " << rearElement(&q) << endl;
    cout << "Queue Size: " << size(&q) << endl;

    cout << "\nRemoving All Elements...\n";
    while (!isEmpty(&q))
    {
        cout << "Removed: " << frontElement(&q) << endl;
        dequeue(&q);
    }

    cout << "\nQueue Size After Emptying: "
         << size(&q) << endl;
    cout << "Is Queue Empty? "
         << (isEmpty(&q) ? "Yes" : "No") << endl;

    // Underflow test
    cout << "\nAttempting Dequeue on Empty Queue:\n";
    dequeue(&q);

    return 0;
}