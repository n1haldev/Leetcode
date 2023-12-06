class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int i;
        for(i = 0;i < n/7;i++) {
            ans += 28 + 7*i;
        }
        n = n%7;
        int starter = i;
        for(int j = 1;j <= n%7; j++) {
            ans += starter + j;
        }
        
        return ans;
    }
};