#include <iostream>
#include <string>
#include <vector>
using namespace std;

// node
class node
{
public:
    int key;
    node *left, *right;
    node(int value)
    {
        key = value;
        left = right = NULL;
    }
};

node *insert(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    inorder(root);
    return 0;
}
