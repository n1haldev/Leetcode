class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int targetSum = (rolls.size()+n) * mean;
        for(auto it: rolls) {
            targetSum -= it;
        }
        cout << targetSum << endl;
        
        int rem = targetSum % n;
        int div = targetSum / n;
        cout << div << endl;
        
        if(targetSum > 6*n || targetSum < 0 || div == 0) {
            return {};
        }
        
        vector<int> ans(n, div);
        int i = 0;
        while(rem > 0) {
            ans[i] += 1;
            i += 1;
            rem -= 1;
        }
        
        return ans;
    }
};