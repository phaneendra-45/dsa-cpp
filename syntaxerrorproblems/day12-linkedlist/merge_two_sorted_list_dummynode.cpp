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

    
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode dummy(0);
    ListNode* temp = &dummy;

    while (list1 != nullptr && list2 != nullptr) {

        if (list1->val < list2->val) {
            temp->next = list1;
            list1 = list1->next;
        }
        else {
            temp->next = list2;
            list2 = list2->next;
        }

        temp = temp->next;
    }

   
    if (list1 != nullptr)
        temp->next = list1;
    else
        temp->next = list2;

    ListNode* head = dummy.next;

    cout << "Merged List: ";

    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}