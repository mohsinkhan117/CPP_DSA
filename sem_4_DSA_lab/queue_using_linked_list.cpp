#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
struct Queue
{
    Node *front;
    Node *rear;
    int count;
};
void createQueue(Queue *q)
{
    q->front = nullptr;
    q->rear = nullptr;
    q->count = 0;
}
void enqueue(Queue *q, int value)
{

    Node *newNode = new Node;
    newNode->next = nullptr;
    newNode->data = value;
    if (q->front == nullptr)
    {
        cout << "empty!!! creating new node in front..." << endl;
        q->front = q->rear = newNode;
    }
    else
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    q->count++;
    cout << "enqueue" << endl;
}
void dequeue(Queue *q)
{
    if (q->front == nullptr)
    {
        cout << "queue is empty" << endl;
        return;
    }
    Node *temp = q->front;
    q->front = q->front->next;
    if (q->front == nullptr)
        q->rear = nullptr;

    delete temp;
    q->count--;
    cout << "dequeue" << endl;
}
int front(Queue *q)
{
    // check if front is null
    return q->front->data;
}
int rear(Queue *q)
{
    // check if rear is empty
    return q->rear->data;
}
bool isempty(Queue *q)
{
    return (q->front == nullptr);
}
bool size(Queue *q)
{
    return q->count;
}

int main()
{

    Queue q;

    createQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);

    enqueue(&q, 30);

    if (!isempty(&q))
    {
        cout << "Front element: " << front(&q) << endl;
        cout << "Rear element: " << rear(&q) << endl;
    }
    dequeue(&q);
    dequeue(&q);

    if (!isempty(&q))
    {
        cout << "Front element after dequeue: " << front(&q) << endl;
        cout << "Rear element after dequeue: " << rear(&q) << endl;
    }

    cout << "Queue size: " << size(&q) << endl;

    dequeue(&q);

    if (isempty(&q))
    {
        cout << "Queue is now empty." << endl;
    }
}