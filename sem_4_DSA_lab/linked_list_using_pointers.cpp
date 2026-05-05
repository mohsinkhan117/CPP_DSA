
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *getNode(Node *head, int index)
{
    while (head && index--)
    {
        head = head->next;
    }
    return head;
}
Node *creatNode(int value)
{
    Node *newNode = new Node;
    newNode->next = nullptr;
    newNode->data = value;
    return newNode;
}

void insertat(Node **head, int value, int pos)
{
    Node *newNode = creatNode(value);

    if (pos == 0)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        Node *pre = getNode(*head, pos - 1);

        if (pre == nullptr)
        {
            cout << "Invalid position\n";
            return;
        }

        newNode->next = pre->next;
        pre->next = newNode;

        cout << "Node added at position " << pos << endl;
    }
}

// void insertat(Node **head, int value , int pos )
// {
// if(pos == 0){
// Node *newNode = creatNode(value);
// newNode -> next = *head;//should not it be pointing to the nullptr??
// *head =newNode;
// }
// else{
//  Node *newNode = creatNode(value);

// Node *pre = getNode(*head, pos-1);
// if(pre == nullptr){
//     cout << "Invalid position\n";
//     return;
// }
// newNode -> next = pre-> next;
// pre -> next = newNode;
// cout<<"added the node at position"<<pre->next<<endl;
// }
// }

void deleteAt(Node **head, int pos)
{
    if (!*head)
    {
        cout << "list is empty";
        return;
    }
    if (pos == 0)
    {
        Node *temp = *head;
        *head = (*head)->next; // *head =temp->next;
    }
    else
    {
        Node *prev = getNode(*head, pos - 1);
        Node *temp = prev->next;
        prev->next = temp->next;
        delete temp;
        cout << "deleted";
    }
}
void search(Node *head, int key)
{
    int index = 0;
    while (head)
    {
        if (key == head->data)
        {
            cout << "key found at index" << index << endl;
            return;
        }
        index++;
        head = head->next;
    }
    cout << "key not found ";
}

int size(Node *head)
{
    int count = 0;
    while (head)
    {
        head = head->next;
        count++;
    }
    return count;
}

void emptyList(Node **head)
{
    while (!*head)
    {
        Node *temp = *head;
        *head = (*head)->next;
        delete temp;
    }
    cout << "deleted list";
}

void print(Node *head)
{
    if (!head)
    {
        cout << "empty";
        return;
    }
    int nodeCount = 0;
    while (head)
    {
        cout << "data in node ";
        head = head->next;
        nodeCount++;
    }
    cout << "Null";
}
