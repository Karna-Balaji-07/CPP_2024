// Insertion at the beginning, middle, end of a linked list

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node* prev;
};

void push(Node** head, int data)
{
    Node* n =  new Node();
    n->value = data;
    n->next = *head;
    n->prev = NULL;
    if(*head != NULL)
        (*head)->prev = n;
    *head = n;
}

void insertAfter(Node* prev, int data)
{
    if(prev == NULL)
        return;
    Node* node = new Node;
    node->value = data;
    node->next = prev->next;
    prev->next = node;
    node->prev = node;
    node->next->prev = node;
}


void traverse(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node* head = NULL;
    push(&head, 15);
    push(&head, 14);
    push(&head, 13);
    push(&head, 12);
    push(&head, 11);
    traverse(head);
    insertAfter(head->next->next,10);
    traverse(head);
    return 0;
}