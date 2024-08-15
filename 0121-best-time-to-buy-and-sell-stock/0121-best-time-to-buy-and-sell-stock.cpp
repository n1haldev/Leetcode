class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int l = prices[0];
        
        for(int price : prices) {
            if(price < l) l = price;
            
            ans = (ans > (price - l)) ? ans : (price - l);
        }
        
        return ans;
    }
};