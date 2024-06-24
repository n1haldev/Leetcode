class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> mpp;
        
        for(int i = 0;i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        
        int it = 0;
        for(int k = 0;k < 3;k++) {
            while(mpp[k] > 0) {
                nums[it++] = k;
                mpp[k]--;
            }
        }
    }
};