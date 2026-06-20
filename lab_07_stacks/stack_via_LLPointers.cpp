#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Stack
{
    Node *top;
    int count;
};

void createStack(Stack *s)
{
    s->top = nullptr;
    s->count = 0;
}

void push(Stack *s, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
    s->count++;
}

void pop(Stack *s)
{
    if (s->top == nullptr)
    {
        cout << "Stack Underflow! Cannot pop" << endl;
        return;
    }
    Node *temp = s->top;
    s->top = s->top->next;
    delete temp;
    s->count--;
}

int top(Stack *s)
{
    if (s->top == nullptr)
    {
        cout << "Stack is empty! No top element." << endl;
        return -1;
    }
    return s->top->data;
}

int size(Stack *s)
{
    return s->count;
}

void empty(Stack *s)
{
    while (s->top != nullptr)
    {
        pop(s); // repeatedly delete nodes
    }
}

int main()
{
    Stack s;
    createStack(&s);

    push(&s, 100);
    push(&s, 200);
    push(&s, 300);
    cout << "Top element: " << top(&s) << endl;
    empty(&s); // clears the stack fully
    if (size(&s) == 0)
    {
        cout << "Stack is now empty." << endl;
    }
    return 0;
}