class Solution {
public:
    int recurseClimbStairs(int n, vector<int> &dp) {
        if(dp[n] != -1) return dp[n];
        return dp[n] = recurseClimbStairs(n-1, dp) + recurseClimbStairs(n-2, dp);
    }
    int climbStairs(int n) {
        if(n == 0 || n == 1) return 1;
        vector<int> dp(n+1, -1);
        dp[0] = 1;
        dp[1] = 1;
        return recurseClimbStairs(n, dp);
    }
};