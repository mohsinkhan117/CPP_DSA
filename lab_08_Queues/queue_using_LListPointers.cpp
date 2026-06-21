#include <iostream>
#include <cstdlib>
using namespace std;
// Node structure
struct Node
{
    int data;
    Node *next;
};
// Queue structure
struct Queue
{
    Node *front;
    Node *rear;
    int count;
};
// a) Creation
void createQueue(Queue *q)
{
    q->front = nullptr;
    q->rear = nullptr;
    q->count = 0;
}
// b) Enqueue
void enqueue(Queue *q, int value)
{
    Node *newNode = new Node;
    if (!newNode)
    {
        cout << "Memory allocation failed\n";
        return;
    }
    newNode->data = value;
    newNode->next = nullptr;
    if (q->rear == nullptr)
    {
        // Empty queue
        q->front = q->rear = newNode;
    }
    else
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    q->count++;
}
// c) Dequeue
void dequeue(Queue *q)
{
    if (q->front == nullptr)
    {
        cout << "Queue Underflow\n";
        return;
    }
    Node *temp = q->front;
    q->front = q->front->next;
    if (q->front == nullptr)
        q->rear = nullptr;
    delete temp;
    q->count--;
}
// d) Front element
int frontElement(Queue *q)
{
    if (q->front == nullptr)
    {
        cout << "Queue is Empty\n";
        return -1;
    }
    return q->front->data;
}
// e) Rear element
int rearElement(Queue *q)
{
    if (q->rear == nullptr)
    {
        cout << "Queue is Empty\n";
        return -1;
    }
    return q->rear->data;
}
// f) Size
int size(Queue *q)
{
    return q->count;
}

// g) Empty
bool isEmpty(Queue *q)
{
    return (q->front == nullptr);
}

int main()
{
    Queue q;
    createQueue(&q);

    cout << "Queue Created Successfully\n\n";

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

    cout << "\nRemoving All Elements:\n";
    while (!isEmpty(&q))
    {
        cout << "Dequeued: "
             << frontElement(&q) << endl;
        dequeue(&q);
    }

    cout << "\nQueue Size: " << size(&q) << endl;
    cout << "Is Queue Empty? "
         << (isEmpty(&q) ? "Yes" : "No") << endl;

    // Underflow Test
    cout << "\nAttempting Dequeue on Empty Queue:\n";
    dequeue(&q);

    return 0;
}