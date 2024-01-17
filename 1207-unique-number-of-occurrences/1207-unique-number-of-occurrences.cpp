class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> counter;
        
        for(int num : arr) {
            counter[num]++;
        }
        
        vector<int> counts;
        set<int> uniCounts;
        
        for(const auto& [num, count] : counter) {
            // if(count > 1) {
            //     return true;
            // }
            uniCounts.insert(count);
            counts.push_back(count); 
        }
        
        if(counts.size() == uniCounts.size()) {
            return true;
        }
        
        return false;
    }
};