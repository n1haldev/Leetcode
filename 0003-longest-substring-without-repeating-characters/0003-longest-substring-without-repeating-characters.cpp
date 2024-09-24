class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> set;
        int ans = 0;
        int maxLength = 0;
        
        for(int i = 0;i < s.size(); i++) {
            while(set.find(s[i]) != set.end()) {
                set.erase(s[ans]);
                ans++;
            }
            set.insert(s[i]);
            maxLength = max(maxLength, i-ans+1);
        }
        
        return maxLength;
    }
};