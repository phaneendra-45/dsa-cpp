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

    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode dummy(0);
    ListNode* temp = &dummy;

    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0) {

        int sum = carry;

        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;

        temp->next = new ListNode(sum % 10);
        temp = temp->next;
    }

    ListNode* head = dummy.next;

    cout << "Sum: ";

    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}