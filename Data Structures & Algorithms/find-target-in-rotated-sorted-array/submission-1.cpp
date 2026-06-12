class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=0;
        while(ans<nums.size()){
            if(nums[ans]==target){
                return ans;
            }
            else{
                ans++;
            }
        }
        return -1;
    }
};
