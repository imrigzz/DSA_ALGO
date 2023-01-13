#include <iostream>
#include <string>
#include <vector>
#include <queue>
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

void level_order(node *root)
{
    queue<node *> qu;
    if (root == NULL)
    {
        return;
    }
    qu.push(root);
    while (!qu.empty())
    {
        node *curr = qu.front();
        cout << curr->val << " ";
        qu.pop();
        if (curr->left != NULL)
        {
            qu.push(curr->left);
        }
        if (curr->right != NULL)
        {
            qu.push(curr->right);
        }
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
    cout << endl
         << "level order traversal : ";
    level_order(root);

    return 0;
}
