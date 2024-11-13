class Solution {
public:
    int solve(int n, int curr, vector<int> &dp){
        if(curr == n) return 0;
        if(curr == n-1) return 1;
        if(curr == n-2) return 2;
        
        
        if(dp[curr] != -1) return dp[curr];
        
        dp[curr] = solve(n, curr+1, dp) + solve(n, curr+2, dp);
        return dp[curr];
    }
    int climbStairs(int n) {
        vector<int>  dp(n+1, -1);
        return solve(n, 0, dp);
    }
};