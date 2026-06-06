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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
       // int count=0;
        for(int i = 0; i < lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp!=nullptr){
                arr.push_back(temp->val);
                temp=temp->next;
                //count++;
            }
        }
        sort(arr.begin(), arr.end());
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        for(int i = 0; i < arr.size(); i++){

            temp->next = new ListNode(arr[i]);

            temp = temp->next;
        }

        return dummy->next;
    }
};
