class Solution {
public:
    bool isPowerOfTwo(int n) {
        int rem = 0;
        if(n == 0)
            return false;
        
        while(1) {
            rem = n & 1;
            
            n = n >> 1;
            if(rem == 1) {
                if(n == 0)
                    break;
                else
                    return false;
            }
        }
        
        return true;
    }
};