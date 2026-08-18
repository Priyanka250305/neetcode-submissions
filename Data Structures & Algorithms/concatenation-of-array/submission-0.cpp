class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans; int n=2;
        while(n>0){
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        n--;
        }
        return ans;
    }
};