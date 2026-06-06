class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqA;
        int max;
        for (int i = 0; i < nums.size(); i++) {
            freqA[nums[i]]++;
        } vector<int> ans;
        while (k != 0) {

            int maxi = 0;
            int element;
            for (auto it : freqA) {
                if (it.second > maxi) {
                    maxi = it.second;
                    element = it.first;
                }
            }

            ans.push_back(element);

            freqA.erase(element);

            k--;
        }return ans;
    }
}

;
