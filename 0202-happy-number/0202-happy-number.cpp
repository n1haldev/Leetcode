class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, bool> marked;
        int sum = 0;
        
        while(1) {
            while(n != 0) {
                int rem = n % 10;
                n /= 10;
                sum += (rem * rem);
            }
            
            if(sum == 1) return true;
            if(marked[sum]) {
                return false;
            }
            marked[sum] = true;
            n = sum;
            sum = 0;
        }
        return false;
    }
};