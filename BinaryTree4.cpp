// Program to find the height of a binary Tree

#include <Bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data)
{
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

int height(Node* head) {
    if (head == NULL)
        return 0;
    else {
        int lheight = height(head->left);
        int rheight = height(head -> right);
        if (lheight > rheight)
            return lheight + 1;
        else
            return rheight + 1;
    }
}

int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right  = newNode(5);
    cout << height(root) << endl;
    return 0;

}