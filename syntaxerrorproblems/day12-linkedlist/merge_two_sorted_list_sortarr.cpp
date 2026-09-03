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

    vector<int> arr;

    while (list1 != nullptr) {
        arr.push_back(list1->val);
        list1 = list1->next;
    }

    while (list2 != nullptr) {
        arr.push_back(list2->val);
        list2 = list2->next;
    }

    sort(arr.begin(), arr.end());

    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

    cout << "Merged List: ";

    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}