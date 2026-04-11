#include <iostream>
#include <vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* createList(vector<int> arr){
    if (arr.empty()) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < arr.size(); i++){
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head != NULL){
        cout << head->val <<" -> ";
        head = head->next;
    }
    cout<< " NULL " << endl;
}

class Solution{
    public: 
        ListNode* deleteDuplicates(ListNode* head) {
            if (head == NULL) return NULL;

            ListNode* temp = head;

            while(temp!= NULL && temp->next != NULL) {
                if (temp->val == temp->next->val){
                    temp->next = temp->next->next;
                } else {
                    temp = temp->next;
                }
            }
            return head;
        }
};

int main(){
    Solution sol;
    
    vector<int> data = {1, 1, 2, 3, 3};
    ListNode* head = createList(data);

    cout<<"Original List: ";
    printList(head);

    head = sol.deleteDuplicates(head);

    cout<<"After Removing Duplicates: ";
    printList(head);
    
    return 0;
}