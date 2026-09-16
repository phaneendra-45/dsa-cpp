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

vector<int> rightSideView(Node* root) {

    vector<int> answer;

    if (root == NULL)
        return answer;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {

        int size = q.size();

        for (int i = 0; i < size; i++) {

            Node* current = q.front();
            q.pop();

            if (i == size - 1) {
                answer.push_back(current->data);
            }

            if (current->left)
                q.push(current->left);

            if (current->right)
                q.push(current->right);
        }
    }

    return answer;
}

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(7);

    vector<int> answer =
        rightSideView(root);

    cout << "Right Side View: ";

    for (int x : answer) {
        cout << x << " ";
    }

    return 0;
}