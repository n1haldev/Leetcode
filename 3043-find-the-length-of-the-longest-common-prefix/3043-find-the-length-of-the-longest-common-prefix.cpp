class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set<string> s;
        int ans = 0;
        
        for(int i = 0;i < arr1.size(); i++) {
            string temp = to_string(arr1[i]);
            
            for(int j = 1;j <= temp.size(); j++) {
                s.insert(temp.substr(0, j));
            }
        }
        
        for(int i = 0;i < arr2.size(); i++) {
            string temp = to_string(arr2[i]);
            
            for(int j = 0;j <= temp.size(); j++) {
                if(s.find(temp.substr(0, j)) != s.end()) {
                    if(j > ans) {
                        ans = j;
                    }
                }
            }
        }
        
        return ans;
    }
};