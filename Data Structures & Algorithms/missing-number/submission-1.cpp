class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int counter=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==counter){counter++;}
            else{ return counter;}
        }
        return counter;
    }
};
