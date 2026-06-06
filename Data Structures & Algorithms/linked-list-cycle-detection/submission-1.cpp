/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* prev=head;
        //ListNode* temp=head;
        ListNode* next1=head;
        while(next1!=nullptr && next1->next!= nullptr){
            prev=prev->next;
            next1=next1->next->next;
            if(prev==next1) return true;
        } return false;
    }
};
