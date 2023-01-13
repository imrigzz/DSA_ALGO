#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct node
{
    int val;
    node *left, *right;
    node(int v)
    {
        val = v;
        left = right = NULL;
    }
};

/*
            10
        20      30
    13      12      60
                        80
*/

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

// int height(node *root, int h = 0, int m = 0)
// {
//     if (root == NULL)
//     {
//         m = max(m, h);
//         h--;
//         return m;
//     }
//     if (root != NULL)
//     {
//         h++;
//         height(root->left, h, m);
//         height(root->right, h, m);
//     }
// }

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

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->left->left = new node(13);
    root->left->right = new node(12);
    root->right = new node(30);
    root->right->right = new node(60);
    root->right->right->right = new node(80);

    cout << height(root);
    return 0;
}
