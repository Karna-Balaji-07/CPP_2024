// Level Order Traversal of Binary Tree

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
    node->right = node->left = NULL;
            return(node);
}

int height(Node* node)
{
    if(node==NULL)
        return  0;
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
//    int height(Node* node);
//    Node* newNode(int data);
    if(root == NULL)
        return;
    if(level == 1)
        cout << root->data << endl;
    if(level > 1)
    {
        printCurrentLevel(root->left,level-1);
        printCurrentLevel(root->right,level-1);

    }
}

void printLevelOrder(Node* root)
{
    int h = height(root);
    for(int i=1;i<=h;i++)
    {
        printCurrentLevel(root,i);
    }
}

int main()
{

    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout << "Level order Traversal : " << endl;
    printLevelOrder(root);
}