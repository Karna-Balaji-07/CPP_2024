// Insertion In Binary Search Tree using Recursion

#include <bits/stdc++.h>
using namespace  std;

class Node
{
public:
    int data;
    Node* left, *right;
};

Node* newNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insert(Node* node, int key)
{
    if(node==NULL)
        return newNode(key);
    if(key < node->data)
        node->left = insert(node->left,key);
    else if(key > node->data)
        node->right = insert(node->right,key);
    return node;
}

void Inorder(Node* root)
{
    if(root == NULL)
        return;
    Inorder(root->left);
    cout << root->data << " -> ";
    Inorder(root->right);
}

int main()
{
   Node* root = NULL;
   root = insert(root,10);
    insert(root,30);
    insert(root,50);
    insert(root,20);
    insert(root,90);
    Inorder(root);
    return 0;
}