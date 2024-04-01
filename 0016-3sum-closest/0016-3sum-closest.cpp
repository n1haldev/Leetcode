class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minClose = INT_MAX;
        int diff = INT_MAX;
        int minDiff = INT_MAX;
        int res = 0;
        sort(nums.begin(), nums.end());
        
        for(int i = 0;i < nums.size(); i++) {
            int j = i + 1;
            int k = nums.size() - 1;
            
            while(j < k) {
                res = nums[i] + nums[j] + nums[k];
                diff = abs(res - target);
                
                if(diff < minDiff) {
                    minDiff = diff;
                    minClose = res;
                }
                
                diff = res - target;
                
                if(diff <= 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        
        return minClose;
    }
};