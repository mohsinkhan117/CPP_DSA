#include <iostream>
using namespace std;
#define SIZE 100
struct Stack
{
    int arr[SIZE];
    int top;
};

void createStack(Stack *s)
{
    s->top = -1;
}
void push(Stack *s, int value)
{
    // if (s->top >= 0 || s->top <= SIZE) // invalid condition
    if (s->top <= SIZE - 1)
    {
        s->top++;
        s->arr[s->top] = value;
    }
    else
        cout << "Push function ----Stack overflow" << endl;
}
void pop(Stack *s)
{
    // s->arr[s->top] = 0;
    // s->top--;

    if (s->top == -1)
    {
        cout << "pop fucntion ----Stack underflow\n";
    }

    s->arr[s->top--];
}
int top(Stack *s)
{
    if (s->top == -1)
    {
        cout << "top function ----Stack is empty! No top element." << endl;
        return -1;
    }
    return s->arr[s->top];
}
int size(Stack *s)
{
    return s->top + 1;
}
void empty(Stack *s)
{
    s->top = -1;
}
int main()
{
    Stack s;
    createStack(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    cout << "Top element: " << top(&s) << endl;
    empty(&s); // clears everything
    if (size(&s) == 0)
    {
        cout << "Stack is now empty." << endl;
    }
    return 0;
}