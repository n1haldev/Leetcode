class Solution {
public:
    int fib(int n) {
       int ans = 1;
        int prev1 = 1;
        int prev2 = 0;
        
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1; 
        
        for(int i = 2;i <= n; i++) {
            ans = prev1 + prev2;
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
};