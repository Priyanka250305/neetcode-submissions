class Solution {
private: 
    int solve(vector<int>& coins, int amount,vector<int>& dp){
        if(amount==0) return 0;
        if(amount<0) return INT_MAX;int mini=INT_MAX;
        //dp[0]=0;
        if(dp[amount]!=-1) return dp[amount];
        for(int i=0;i<coins.size();i++){
            
                int x=solve(coins,amount-coins[i],dp);
                if (x != INT_MAX) {
                mini = min(mini, x + 1);
                }
            
        }dp[amount]=mini;
        if(dp[amount]<0) return 0;
        return dp[amount];
    }
public:
    int coinChange(vector<int>& coins, int amount) {
       int n= coins.size();
        vector<int> dp(amount+1,-1);
        int ans=solve(coins,amount,dp);
        if (ans == INT_MAX)
            return -1;

        return ans;

    }
};
