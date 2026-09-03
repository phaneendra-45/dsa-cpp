#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

int main() {


    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    stack<ListNode*> st;

    ListNode* temp = head;

    while (temp != nullptr) {
        st.push(temp);
        temp = temp->next;
    }

    
    ListNode* newHead = st.top();
    st.pop();

    temp = newHead;

    while (!st.empty()) {
        temp->next = st.top();
        st.pop();

        temp = temp->next;
    }

    temp->next = nullptr;

    head = newHead;

    cout << "Reversed List: ";

    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}