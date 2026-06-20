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

int main()
{
}
