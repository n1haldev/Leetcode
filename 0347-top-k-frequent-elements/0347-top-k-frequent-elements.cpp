class Solution {
public:
    static bool custom_compare(pair<int, int> &p1, pair<int, int> &p2) {
        return p1.second > p2.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        
        for(auto it : nums) {
            mpp[it]++;
        }
        
        vector<pair<int, int>> pairs;
        
        for(auto it : mpp) {
            pairs.push_back({it.first, it.second});
        }
        
        vector<int> ans;
        sort(pairs.begin(), pairs.end(), custom_compare);
        
        for(int i = 0;i < k;i++) {
            ans.push_back(pairs[i].first);
        }
        
        return ans;
    }
};