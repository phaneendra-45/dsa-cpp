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

vector<vector<int>> zigzagLevelOrder(Node* root) {

    vector<vector<int>> result;

    if (root == NULL)
        return result;

    queue<Node*> q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty()) {

        int size = q.size();

        vector<int> level;

        for (int i = 0; i < size; i++) {

            Node* node = q.front();
            q.pop();

            level.push_back(node->data);

            if (node->left)
                q.push(node->left);

            if (node->right)
                q.push(node->right);
        }

        if (!leftToRight) {
            reverse(level.begin(), level.end());
        }

        result.push_back(level);

        leftToRight = !leftToRight;
    }

    return result;
}

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> result =
        zigzagLevelOrder(root);

    cout << "Zigzag Level Order:\n";

    for (auto level : result) {

        for (int x : level) {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}