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

    cout << "empty... creating new node ..." << endl;
    Node *newNode = new Node;
    newNode->next = nullptr;
    newNode->data = value;
    if (q->front == nullptr)
    {
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