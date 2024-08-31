class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> s;
        int a;
        int sum = 0;
        
        for(auto it : nums) {
            if(s.find(it) == s.end()) {
                sum += it;
                s.insert(it);                
            }
            else {
                a=it;
            }
        }
        int n = nums.size();
        int tobe_sum = (n * (n+1)) / 2;
        return {a, abs(tobe_sum - sum)};
    }
};