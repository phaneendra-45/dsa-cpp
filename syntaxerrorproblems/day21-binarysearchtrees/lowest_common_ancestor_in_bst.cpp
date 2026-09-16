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

Node* lowestCommonAncestor(
    Node* root,
    Node* p,
    Node* q
) {

    if (p->data < root->data &&
        q->data < root->data) {

        return lowestCommonAncestor(
            root->left, p, q
        );
    }

    if (p->data > root->data &&
        q->data > root->data) {

        return lowestCommonAncestor(
            root->right, p, q
        );
    }

    return root;
}

int main() {

    Node* root = new Node(8);

    root->left = new Node(4);
    root->right = new Node(12);

    root->left->left = new Node(2);
    root->left->right = new Node(6);

    root->right->left = new Node(10);
    root->right->right = new Node(14);

    
    Node* p = root->left->left;   
    Node* q = root->left->right;  

    Node* answer =
        lowestCommonAncestor(root, p, q);

    cout << "LCA of "
         << p->data << " and "
         << q->data << " = "
         << answer->data << endl;

    return 0;
}