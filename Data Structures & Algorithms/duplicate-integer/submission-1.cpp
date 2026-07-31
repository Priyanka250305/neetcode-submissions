class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            
            if(st.find(nums[i])!=st.end()){
                st.erase(nums[i]);
                return true;
                
            }st.insert(nums[i]);
        }
        return false;

    }
};