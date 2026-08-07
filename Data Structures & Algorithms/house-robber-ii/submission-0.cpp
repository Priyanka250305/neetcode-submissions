class Solution {
private:
    int solve(vector<int> &nums, int n, vector<int> &dp) {

        if (n == 0)
            return nums[0];

        if (n < 0)
            return 0;

        if (dp[n] != -1)
            return dp[n];

        int incl = nums[n] + solve(nums, n - 2, dp);
        int excl = solve(nums, n - 1, dp);

        return dp[n] = max(incl, excl);
    }

public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 1)
            return nums[0];

        // Exclude first house
        vector<int> temp1;
        for (int i = 1; i < n; i++)
            temp1.push_back(nums[i]);

        // Exclude last house
        vector<int> temp2;
        for (int i = 0; i < n - 1; i++)
            temp2.push_back(nums[i]);

        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        int ans1 = solve(temp1, temp1.size() - 1, dp1);
        int ans2 = solve(temp2, temp2.size() - 1, dp2);

        return max(ans1, ans2);
    }
};