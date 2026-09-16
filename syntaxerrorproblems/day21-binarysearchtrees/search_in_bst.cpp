#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* searchBST(Node* root, int value) {

    if (root == NULL || root->data == value)
        return root;

    if (value < root->data)
        return searchBST(root->left, value);

    return searchBST(root->right, value);
}

int main() {

    Node* root = new Node(8);

    root->left = new Node(4);
    root->right = new Node(12);

    root->left->left = new Node(2);
    root->left->right = new Node(6);

    root->right->left = new Node(10);
    root->right->right = new Node(14);

    int value = 10;

    Node* result = searchBST(root, value);

    if (result != NULL)
        cout << "Value " << value << " found in BST" << endl;
    else
        cout << "Value " << value << " not found in BST" << endl;

    return 0;
}