class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        if(x >= 1 && x < 4)
            return 1;
        if(x >= 4 && x < 9)
            return 2;
        
        int l = 1;
        int r = x;
        int ans;
        long m;
        long long res;
        
        while(l <= r) {
            m = l + (r - l) / 2;
            res = m * m;
            
            if(res == x) {
                return m;
            }
            else if(res > x) {
                r = m - 1;
            }
            else {
                l = m + 1;
                ans = m;
            }
        }
        return ans;
    }
};