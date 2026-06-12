class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> mp; int ans=0;
        for(int i=0;i<nums.size(); i++){
            if(mp.find(nums[i])!=mp.end()){
                ans=nums[i];
            }
            else{
                mp.insert(nums[i]);
            }
        }
        return ans;
    }
};
