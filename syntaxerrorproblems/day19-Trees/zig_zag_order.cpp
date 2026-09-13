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

vector<vector<int>> zigzagTraversal(Node* root) {

    vector<vector<int>> answer;

    if (root == NULL)
        return answer;

    queue<Node*> q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty()) {

        int size = q.size();

        vector<int> level(size);

        for (int i = 0; i < size; i++) {

            Node* current = q.front();
            q.pop();

            int index;

            if (leftToRight)
                index = i;
            else
                index = size - 1 - i;

            level[index] = current->data;

            if (current->left != NULL)
                q.push(current->left);

            if (current->right != NULL)
                q.push(current->right);
        }

        answer.push_back(level);

        leftToRight = !leftToRight;
    }

    return answer;
}

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> answer = zigzagTraversal(root);

    cout << "Zigzag Traversal: ";

    for (auto level : answer) {

        for (int x : level) {
            cout << x << " ";
        }
    }

    return 0;
}