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

Node* invertTree(Node* root) {

    if (root == NULL)
        return NULL;

    swap(root->left, root->right);

    invertTree(root->left);

    invertTree(root->right);

    return root;
}

void printTree(Node* root) {

    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {

        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left)
            q.push(current->left);

        if (current->right)
            q.push(current->right);
    }
}

int main() {

    
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Original Tree: ";
    printTree(root);

    invertTree(root);

    cout << "\nInverted Tree: ";
    printTree(root);

    return 0;
}