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

void solve(Node* root, string path, vector<string>& result) {

    if (root == NULL)
        return;

    path += to_string(root->data);

    if (root->left == NULL && root->right == NULL) {
        result.push_back(path);
        return;
    }

    solve(root->left, path + "->", result);

    solve(root->right, path + "->", result);
}

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->right = new Node(5);

    vector<string> result;

    solve(root, "", result);

    cout << "Root-to-Leaf Paths:\n";

    for (string path : result) {
        cout << path << endl;
    }

    return 0;
}