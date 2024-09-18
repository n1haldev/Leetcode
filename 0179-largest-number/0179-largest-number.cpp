class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans;
        vector<string> strs;
        
        for(auto it : nums) {
            strs.push_back(to_string(it));
        }
        
        sort(strs.begin(), strs.end(), [](string &a, string &b) { return a+b > b+a; });
        
        if(strs[0] == "0") return "0";
        
        for(auto it = strs.begin();it != strs.end(); it++) {
            ans += *it;
        }
        
        return ans;
    }
};