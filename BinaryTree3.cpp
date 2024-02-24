// Level Order Traversal

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
};

Node* node(int data)
{
    Node* newnode = new Node();
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return (newnode);
}

int height(Node* node)
{
    if(node== NULL)
        return 0;
    else
    {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if(lheight > rheight)
            return lheight+1;
        else
            return rheight+1;
    }
}

void printCurrentLevel(Node* root, int level)
{
    int height(Node* root);
    Node* node(int data);
    if(root == NULL)
        return;
    if(level == 1)
        cout << root->data << endl;
    else if(level > 1)
    {
        printCurrentLevel(root->left,level-1);
        printCurrentLevel(root->right,level-1);
    }
}

void printLevelOrder(Node* root)
{
    int h = height(root);
    for(int i=0;i<=h;i++)
        printCurrentLevel(root,i);
}

int main()
{
    Node* root = node(1);
    root->left = node(2);
    root->right = node(3);
    root->left->left =node(4);
    root->left->right = node(5);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);

    return 0;
}