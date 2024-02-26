// Inorder Traversal of a Binary Tree
// left -> root -> right

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
};

Node* newNode(int data)
{
    Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return(node);
}

void Inorder(Node* node)
{
        if(node==NULL)
            return;
    Inorder(node->left);
    cout << node->data << " -> ";
    Inorder(node->right);
}

int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->left = newNode(5);
    Inorder(root);
    return 0;
}