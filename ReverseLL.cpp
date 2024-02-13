#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
};

void push(Node** head, int data)
{
    Node* n = new Node();
    n->value = data;
    n->next = *head;
    *head = n;
}

void traverse(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout <<" NULL"<<endl;
}

void reverse(Node* head)
{
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{
    Node* head = NULL;
    push(&head,1);
    push(&head,12);
    push(&head,15);
    push(&head,13);
    push(&head,71);
    push(&head,12);
    push(&head,100);
    traverse(head);
    reverse(head);
    traverse(head);
    return 0;
}