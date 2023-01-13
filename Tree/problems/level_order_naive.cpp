#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
                    10
                40      30
            15      20      90
*/

struct node
{
    int val;
    node *left, *right;
    node(int value)
    {
        val = value;
        left = right = NULL;
    }
};

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

// 1 function to find height of tree
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}

// function to print nodes at k distance from the root
void dis(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->val << " ";
    }
    else
    {
        dis(root->left, k - 1);
        dis(root->right, k - 1);
    }
}

int main()
{
    // your code here
    node *root = new node(10);
    root->left = new node(40);
    root->left->left = new node(15);
    root->left->right = new node(20);
    root->right = new node(30);
    root->right->right = new node(90);

    inorder(root);
    int h = height(root);
    cout << "\nHeight of tree is :" << h << endl;
    cout << "Level order: ";
    for (int i = 0; i < h; i++)
    {
        dis(root, i);
    }

    return 0;
}
