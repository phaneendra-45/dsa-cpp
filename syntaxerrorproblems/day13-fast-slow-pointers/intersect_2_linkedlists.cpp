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

    
    ListNode* common = new ListNode(8);
    common->next = new ListNode(4);
    common->next->next = new ListNode(5);

    
    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = common;

    
    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = common;

    ListNode* a = headA;
    ListNode* b = headB;

    while (a != b) {

        if (a == nullptr)
            a = headB;
        else
            a = a->next;

        if (b == nullptr)
            b = headA;
        else
            b = b->next;
    }

    if (a != nullptr)
        cout << "Intersection: " << a->val;
    else
        cout << "No Intersection";

    return 0;
}