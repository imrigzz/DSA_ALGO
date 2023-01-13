#include <iostream>
#include <string>
#include <vector>
using namespace std;

class node
{
public:
    node *left, *right;
    int data;

    node(int val)
    {
        data = val;
        right = left = NULL;
    }

    node *insert(node *root, int val)
    {
        if (root == NULL)
        {
            return new node(val);
        }
        if (val < root->data)
        {
            root->left = insert(root->left, val);
        }
        else
        {
            root->right = insert(root->right, val);
        }
        return root;
    }

    void preorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }

        preorder(root->left);
        cout << root->data << endl;
        preorder(root->right);
    }
};

int main()
{
    // your code here
    node *root = NULL;
    root = root->insert(root, 10);
    root = root->insert(root, 1);
    root = root->insert(root, 2);
    root = root->insert(root, 4);
    root = root->insert(root, 6);
    root = root->insert(root, 20);
    root = root->insert(root, 12);
    root->preorder(root);

    return 0;
}
