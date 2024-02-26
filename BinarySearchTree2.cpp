// Searching in Binary Search Tree
// Search using Binary Search algorithm as the values are sorted

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left, *right;
};

Node* newNode(int data)
{
    Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

Node* insert(Node* root,  int value)
{
    if(root == NULL)
        return newNode(value);
    if(value < root->data)
        root->left = insert(root->left,value);
    else if(value > root->data)
        root->right = insert(root->right,value);
    return root;
}

Node* search(Node* root, int key)
{
    if(root == NULL || root->data == key)
        return root;
    if(key < root->data)
        return search(root->left,key);
    else if(key > root->data)
        return search(root->right,key);
}

void Inorder(Node* root)
{
    if(root == NULL)
        return;
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

int main()
{
    Node* root = NULL;
    root = insert(root,10);
    insert(root,20);
    insert(root,50);
    insert(root,40);
    insert(root,60);
    insert(root,80);
    Inorder(root);
    if(search(root,20) == NULL)
        cout << "Not found" << endl;
    else
        cout << "Found" << endl;

    if(search(root,12) == NULL)
        cout << "Not found" << endl;
    else
        cout << "found" << endl;
}