class Solution {
public:
    int recurseFib(int n, vector<int> &dp) {
        if(n <= 1) {
            return n;
        }
        if(dp[n] != -1) 
            return dp[n];
        return dp[n] = recurseFib(n-1, dp) + recurseFib(n-2, dp);
    }
    int fib(int n) {
        vector<int> dp(n+1, -1);
        return recurseFib(n, dp);
    }
};