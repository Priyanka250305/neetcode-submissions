class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Count frequency of each element
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Max Heap -> (frequency, element)
        priority_queue<pair<int, int>> pq;

        for (auto it : freq) {
            pq.push({it.second, it.first});
        }

        // Step 3: Pop top k elements
        vector<int> ans;

        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};