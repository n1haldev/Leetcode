class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int len = nums.size();
        int countles = 0;
        int counttarget = 0;
        
        for(int i = 0;i < len; i++) {
            if(nums[i] == target) {
                counttarget++;
            }
            else if(nums[i] < target) {
                countles++;
            }
        }
        
        // building answer vector
        vector<int> ans;
        for(int i = 0;i < counttarget; i++) {
            ans.push_back(countles++);
        }
        
        return ans;
    }
};