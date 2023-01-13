#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int main()
{
    Node *root;
    root = new Node(10);
    root->left = new Node(4);
    root->right = new Node(18);
    cout << root->key << " " << root->left->key << " " << root->right->key;
    return 0;
}
