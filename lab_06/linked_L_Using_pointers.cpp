#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *createNode(int data)
{
    Node *newNode = new Node;
    if (!newNode)
    {
        cout << "Memory allocation failed.\n";
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
Node *getNodeAt(Node *head, int index)
{
    while (head && index--)
    {
        head = head->next;
    }
    return head;
}

void insertNode(Node **head, int data, int position)
{
    if (position == 0)
    {
        Node *newNode = createNode(data);
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        Node *prev = getNodeAt(*head, position - 1);
        Node *newNode = createNode(data);
        newNode->next = prev->next; // points the newNode to the next/after node if we are inserting in the middle of the list
        prev->next = newNode;       // detach the previous node and attach to the new one
    }
}

int main()
{
}
