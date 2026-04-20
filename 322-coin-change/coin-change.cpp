class Solution {
public:
    int solve(vector<int>&coins,int amount,int i,int n,vector<vector<int>>&dp){
       
        if(amount==0){
            return 0;
        }
        if(i==n){
            return INT_MAX;
        } 
        if(dp[i][amount]!=-1){
            return dp[i][amount];
        }
        
        int take=INT_MAX;
       if (coins[i] <= amount) {
            int ans = solve(coins, amount - coins[i], i, n,dp);
            if (ans != INT_MAX) {
                take = 1 + ans;
            }
        }
    
        int notTake = solve(coins, amount, i + 1, n,dp);
        
        dp[i][amount]= min(take, notTake);
        return dp[i][amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans =solve(coins,amount,0,n,dp);
        if(ans!=INT_MAX){
            return ans;
        }
        return -1;
    }};