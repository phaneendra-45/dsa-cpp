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


    head->next->next->next->next = head->next;

    ListNode* slow = head;
    ListNode* fast = head;

    bool cycle = false;

    while (fast != nullptr && fast->next != nullptr) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cycle = true;
            break;
        }
    }

    if (cycle)
        cout << "Cycle Found";
    else
        cout << "No Cycle";

    return 0;
}