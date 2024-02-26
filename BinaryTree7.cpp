// Preorder Traversal of binary tree
// root -> left - >right

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left,*right;
};

Node* newNode(int data)
{
    Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void Preorder(Node* node)
{
    if(node==NULL)
        return;
    cout << node->data << "->";
    Preorder(node->left);
    Preorder(node->right);
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(5);
    root->left->right = newNode(4);
    Preorder(root);
    return 0;
}