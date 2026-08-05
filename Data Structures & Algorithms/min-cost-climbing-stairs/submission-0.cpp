class Solution {
    private:
    int solve(vector<int> &cost, int i,vector<int> &dp){
        if(i >= cost.size())
            return 0;

        if(dp[i] != -1)
            return dp[i];

        dp[i] = cost[i] + min(solve(cost, i+1, dp),
                              solve(cost, i+2, dp));

        return dp[i];
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        int ans=min(solve(cost,0,dp), solve(cost,1,dp));
        return ans;
    }
};