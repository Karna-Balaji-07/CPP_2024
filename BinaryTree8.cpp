// Postorder Traversal of a Binary Tree
// left -> right -> root

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
    return node;
}

void Postorder(Node* root)
{
    if(root == NULL)
        return;
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " -> ";
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->left = newNode(5);
    Postorder(root);
    return 0;
}