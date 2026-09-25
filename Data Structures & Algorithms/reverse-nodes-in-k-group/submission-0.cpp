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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(-1);
        ListNode* curr = &dummy;
        while (head != NULL) {
            vector<int> arr;
            ListNode* temp = head;
            for (int i = 0; i < k; i++) {
                if (temp == NULL) {
                    head = temp;
                    
                    for (auto num : arr) {
                        curr->next = new ListNode(num);
                        // curr->val = num;
                        curr = curr->next;
                    }
                    return dummy.next;
                }
                arr.push_back(temp->val);
                temp = temp->next;
            }
            head = temp;
            reverse(arr.begin(), arr.end());
            for (auto num : arr) {
                curr->next = new ListNode(num);
                // curr->val = num;
                curr = curr->next;
            }
        }
        return dummy.next;
    }
};
