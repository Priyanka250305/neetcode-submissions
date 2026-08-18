class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxFreq=0;
        int res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>maxFreq){
                res=nums[i];
                maxFreq=mp[nums[i]];
            }
        }return res;
    }
};