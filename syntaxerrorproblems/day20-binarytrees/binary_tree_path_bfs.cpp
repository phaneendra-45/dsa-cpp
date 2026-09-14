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

vector<string> binaryTreePaths(Node* root) {

    vector<string> result;

    if (root == NULL)
        return result;

    
    queue<pair<Node*, string>> q;

    q.push({root, to_string(root->data)});

    while (!q.empty()) {

        auto current = q.front();
        q.pop();

        Node* node = current.first;
        string path = current.second;

        if (node->left == NULL &&
            node->right == NULL) {

            result.push_back(path);
        }

        if (node->left) {

            q.push({
                node->left,
                path + "->" +
                to_string(node->left->data)
            });
        }

        if (node->right) {

            q.push({
                node->right,
                path + "->" +
                to_string(node->right->data)
            });
        }
    }

    return result;
}

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->right = new Node(5);

    vector<string> result = binaryTreePaths(root);

    cout << "Root-to-Leaf Paths:\n";

    for (string path : result) {
        cout << path << endl;
    }

    return 0;
}