class Solution {
public:
    int climbStairs(int n) {
        int ans = 0;
        int prev1 = 1;
        int prev2 = 1;
        
        if(n == 0 || n == 1 || n == 2) return n;
        for(int i = 2;i <= n; i++) {
            ans = prev1 + prev2;
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
};