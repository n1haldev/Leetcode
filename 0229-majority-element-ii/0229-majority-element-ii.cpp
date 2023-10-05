class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int p1 = 0, p2 = 0;
        int count1 = 0, count2 = 0;
        
        for(auto i: nums) {
            if(p1 == i) count1++;
            else if(p2 == i) count2++;
            else if(count1 == 0) {
                p1 = i;
                count1 = 1;
            }
            else if(count2 == 0) {
                p2 = i;
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }
        
        count1 = count2 = 0;
        for (int num : nums) {
            if (num == p1) count1++;
            else if (num == p2) count2++;
        }
        
        vector<int> ans;
        if(count1 > nums.size() / 3) ans.push_back(p1);
        if(count2 > nums.size() / 3) ans.push_back(p2);
        
        return ans;
    }
};