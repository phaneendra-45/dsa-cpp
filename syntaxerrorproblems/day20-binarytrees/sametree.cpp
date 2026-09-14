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

bool isSameTree(Node* p, Node* q) {

    if (p == NULL && q == NULL)
        return true;

    if (p == NULL || q == NULL)
        return false;

    if (p->data != q->data)
        return false;

    return isSameTree(p->left, q->left) &&
           isSameTree(p->right, q->right);
}

int main() {



    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

   

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);

    if (isSameTree(root1, root2))
        cout << "Both trees are SAME" << endl;
    else
        cout << "Both trees are NOT SAME" << endl;

    return 0;
}