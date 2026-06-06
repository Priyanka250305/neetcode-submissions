class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1; int a=0;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(i!=j){
                    mul*=nums[j];
                    
                }
            }ans.push_back(mul);
            mul=1;
        }return ans;
    }
};
