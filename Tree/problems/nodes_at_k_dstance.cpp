#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
            10
        20      30
    13      12      60
                        80
*/

struct node
{
    int key;
    node *left, *right;
    node(int val)
    {
        key = val;
        left = right = NULL;
    }
};

void distance(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->key << " ";
    }
    else
    {
        distance(root->left, k - 1);
        distance(root->right, k - 1);
    }
}

// void distance(node *root, int h, int k)
// {
//     if (root == NULL)
//     {
//         h--;
//         return;
//     }
//     if (root != NULL)
//     {
//         if (h == k)
//         {
//             cout << root->key << " ";
//         }
//         h++;
//         distance(root->left, h, k);
//         distance(root->right, h, k);
//     }
// }

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->left->left = new node(13);
    root->left->right = new node(12);
    root->right = new node(30);
    root->right->right = new node(60);
    root->right->right->right = new node(80);

    distance(root, 2);
    return 0;
}
