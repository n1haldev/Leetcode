class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mpp;
        
        for(int i = 0;i < strs.size(); i++) {
            string key = countSort(strs[i]);
            mpp[key].push_back(strs[i]);
        }
        
        vector<vector<string>> ans;
        for(auto it: mpp) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
    
    string countSort(string s) {
        int count[26] = {0};
        
        for(char ch : s) {
            count[ch - 'a']++;
        }
        
        string sorted;
        for(int i = 0;i < 26; i++) {
            sorted += string(count[i], i + 'a');
        }
        
        return sorted;
    }
};