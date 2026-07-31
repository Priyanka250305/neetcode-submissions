class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> ans;
       
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }while(k!=0){
             int maxi=0; int element=0;
        for(auto it: freq){
            if(it.second>maxi){
                maxi=it.second;
                element=it.first;
            }
        }
        ans.push_back(element);
        freq.erase(element);
        k--;
        }
        return ans;
    }
}

;
