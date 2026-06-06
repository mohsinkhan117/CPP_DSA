#include <iostream>
#define max 100
using namespace std;

// queues through arrays
struct Queue
{
    int arr[max];
    int front;
    int rear;
};
void creatQueue(Queue *q)
{
    int front = 0;
    int rear = -1;
}
void enqueue(Queue *q, int value)
{
    if (q->rear == max - 1)
    {
        cout << "queue is full" << endl;
        return;
    }
    q->arr[++q->rear] = value;
    cout << "enqueue" << endl;
}
void dequeue(Queue *q)
{
    if (q->front > q->rear)
    {
        cout << "QUEUE is empty" << endl;
        return;
    }
}
int front(Queue *q)
{
    if (q->front > q->rear)
    {
        cout << "empty";
        return -1;
    }
    return q->arr[q->front];
}
int rear(Queue *q)
{
    if (q->front > q->rear)
    {
        cout << "empty";
        return -1;
    }
    return q->arr[q->rear];
}

bool isempty(Queue *q)
{
    return (q->front > q->rear);
}
bool isfull(Queue *q)
{
    return (q->rear > q->front);
}
int main() {}