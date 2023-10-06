class Solution {
public:
    int integerBreak(int n) {
        vector<int> breakup;
        if(n == 2)
            return 1;
        if(n == 3) 
            return 2;
        while(n >= 3) {
            if(n == 4) {
                break;
            }
            n -= 3;
            breakup.push_back(3);
        }
        if(n != 0)
            breakup.push_back(n);
        
        int product = 1;
        for(auto i: breakup) {
            product *= i;
        }
        return product;
    }
};