class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int num=target - nums[i];
            if(s.find(num)!=s.end()){
                ans.push_back(s[num]); 
                ans.push_back(i);
                
            }
            s[nums[i]]=i;
        }
        return ans;
    }
};
