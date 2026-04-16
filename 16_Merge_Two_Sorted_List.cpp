#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* dummy = new ListNode (0);
            ListNode* curr = dummy;
            
            while (list1 && list2) {
                if (list1->val <= list2->val)  {
                    curr->next = list1;
                    list1 = list1->next;
                } else {
                    curr->next = list2;
                    list2 = list2->next;
                }
                curr = curr->next;
            }
            return dummy->next;
        }
};


int main(){
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    Solution sol;
    ListNode* res = sol.mergeTwoLists(l1, l2);

    while (res) {
        cout << res->val << " ";
        res = res->next;
    }
    return 0;
}