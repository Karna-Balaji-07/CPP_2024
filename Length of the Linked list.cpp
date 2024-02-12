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
    cout << "NULL" << endl;
}

void length(Node* head)
{
    Node* curr = head;
    int count = 0;
    while(curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    cout << "The length of the linked list : " << count << endl;
}

int main()
{
    Node* head = NULL;
    push(&head, 10);
    push(&head, 30);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);
    traverse(head);
    length(head);
    return 0;
}